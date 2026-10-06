/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10323ae54; end: 10323afd7;  */

code * FUN_10323ae54(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  pcVar1 = FUN_10323a620;
  func_0x0001000d5158(FUN_10323a620,0,&UNK_11076a6f0);
  uStack_48 = 1;
  uStack_50 = 0;
  func_0x0001006c71a4(&uStack_50);
  func_0x000107c61574(pcVar1);
  FUN_1032090e0();
  func_0x0001000c2068();
  func_0x000107c61574(puVar2);
  uVar5 = 0x112f4e230;
  func_0x0001000285a8(0x112f4e230,&UNK_10dba0c08);
  pcVar3 = FUN_10323a708;
  func_0x0001000bfde0(FUN_10323a708,0,uVar5);
  pcVar4 = FUN_10323a904;
  func_0x00010487de38(FUN_10323a904,0);
  func_0x000107c61574(pcVar3);
  puVar2 = (undefined8 *)0x112e15788;
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  FUN_10326da44();
  uVar5 = *puVar2;
  func_0x000107c61174(uVar5);
  pcVar3 = FUN_10323a5e0;
  FUN_10326d7dc(FUN_10323a5e0,0,uVar5);
  func_0x000107c61170(uVar5);
  pcVar6 = pcVar3;
  func_0x00010061da28(pcVar3,pcVar1);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar3);
  uVar5 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  pcVar3 = FUN_10323ab94;
  func_0x0001000bfde0(FUN_10323ab94,0,uVar5);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(pcVar6);
  return pcVar3;
}



/* Entry: 10323afd8; end: 10323affb;  */

void FUN_10323afd8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10323affc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10323affc; end: 10323b03b;  */

void FUN_10323affc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e1e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dba0b68;
  func_0x000107c61520(&DAT_10dba0b68,&UNK_11062a0d8);
  puRam0000000112f4e1e8 = puVar1;
  return;
}



/* Entry: 10323b03c; end: 10323b067;  */

void FUN_10323b03c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ba00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ba08;
  func_0x00010002969c(0x112f4ba08,&UNK_10db9b500);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ba00 = puVar2;
  return;
}



/* Entry: 10323b068; end: 10323b0c3;  */

long FUN_10323b068(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10323b0c4; end: 10323b1a3;  */

undefined8 * FUN_10323b0c4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 10323b1a4; end: 10323b1f7;  */

undefined8 * FUN_10323b1a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10323b1f8; end: 10323b2a3;  */

int FUN_10323b1f8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10323b2a4; end: 10323b313;  */

undefined8 * FUN_10323b2a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10323b314; end: 10323b3a7;  */

int FUN_10323b314(int *param_1,int param_2)

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



/* Entry: 10323b3a8; end: 10323b4b7;  */

undefined1  [16]
FUN_10323b3a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = (uint)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,PTR___sSiN_11034deb0,6);
  if (uVar1 == 0) {
    auStack_90[0] = 0;
  }
  auVar4._8_4_ = uVar1 ^ 1;
  auVar4._0_8_ = auStack_90[0];
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Entry: 10323b4b8; end: 10323b4bf;  */

undefined8 * FUN_10323b4b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10323b4c0; end: 10323b63f;  */

long FUN_10323b4c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10323b640; end: 10323b89b;  */

undefined8 * FUN_10323b640(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar2 == 0) {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar8 = param_2[3];
      uVar7 = param_2[2];
      uVar10 = param_2[5];
      uVar9 = param_2[4];
      uVar11 = *(undefined8 *)((long)param_2 + 0x29);
      *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
      *(undefined8 *)((long)param_1 + 0x29) = uVar11;
      param_1[3] = uVar8;
      param_1[2] = uVar7;
      param_1[5] = uVar10;
      param_1[4] = uVar9;
      param_1[1] = uVar6;
      *param_1 = uVar5;
      goto LAB_10323b770;
    }
    param_1[3] = lVar2;
    param_1[4] = param_2[4];
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
    uVar1 = param_2[6];
    if (10 < uVar1) {
      func_0x000107c61434();
    }
    param_1[6] = uVar1;
  }
  else {
    if (lVar2 == 0) {
      FUN_10322b438(param_1);
      uVar9 = param_2[3];
      uVar8 = param_2[2];
      uVar6 = param_2[5];
      uVar5 = param_2[4];
      uVar7 = *(undefined8 *)((long)param_2 + 0x29);
      uVar11 = param_2[1];
      uVar10 = *param_2;
      *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
      *(undefined8 *)((long)param_1 + 0x29) = uVar7;
      param_1[3] = uVar9;
      param_1[2] = uVar8;
      param_1[5] = uVar6;
      param_1[4] = uVar5;
      param_1[1] = uVar11;
      *param_1 = uVar10;
      goto LAB_10323b770;
    }
    func_0x000100083374(param_1,param_2);
    puVar3 = param_1 + 6;
    uVar4 = *puVar3;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
    uVar1 = param_2[6];
    if (uVar4 < 0xb) {
      if (uVar1 < 0xb) {
        *puVar3 = uVar1;
      }
      else {
        *puVar3 = uVar1;
        func_0x000107c61434();
      }
    }
    else if (uVar1 < 0xb) {
      FUN_10323b89c(puVar3);
      *puVar3 = param_2[6];
    }
    else {
      *puVar3 = uVar1;
      func_0x000107c61434();
      func_0x000107c6142c(uVar4);
    }
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
LAB_10323b770:
  lVar2 = param_2[0xb];
  if (param_1[0xb] == 0) {
    if (lVar2 == 0) {
      uVar6 = param_2[9];
      uVar5 = param_2[8];
      uVar8 = param_2[0xb];
      uVar7 = param_2[10];
      uVar10 = param_2[0xd];
      uVar9 = param_2[0xc];
      uVar11 = *(undefined8 *)((long)param_2 + 0x69);
      *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
      *(undefined8 *)((long)param_1 + 0x69) = uVar11;
      param_1[0xb] = uVar8;
      param_1[10] = uVar7;
      param_1[0xd] = uVar10;
      param_1[0xc] = uVar9;
      param_1[9] = uVar6;
      param_1[8] = uVar5;
      return param_1;
    }
    param_1[0xb] = lVar2;
    param_1[0xc] = param_2[0xc];
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 8,param_2 + 8);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
    uVar1 = param_2[0xe];
    if (10 < uVar1) {
      func_0x000107c61434();
    }
    param_1[0xe] = uVar1;
  }
  else {
    if (lVar2 == 0) {
      FUN_10322b438(param_1 + 8);
      uVar9 = param_2[0xb];
      uVar8 = param_2[10];
      uVar6 = param_2[0xd];
      uVar5 = param_2[0xc];
      uVar7 = *(undefined8 *)((long)param_2 + 0x69);
      uVar11 = param_2[9];
      uVar10 = param_2[8];
      *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
      *(undefined8 *)((long)param_1 + 0x69) = uVar7;
      param_1[0xb] = uVar9;
      param_1[10] = uVar8;
      param_1[0xd] = uVar6;
      param_1[0xc] = uVar5;
      param_1[9] = uVar11;
      param_1[8] = uVar10;
      return param_1;
    }
    func_0x000100083374(param_1 + 8,param_2 + 8);
    puVar3 = param_1 + 0xe;
    uVar4 = *puVar3;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
    uVar1 = param_2[0xe];
    if (uVar4 < 0xb) {
      if (uVar1 < 0xb) {
        *puVar3 = uVar1;
      }
      else {
        *puVar3 = uVar1;
        func_0x000107c61434();
      }
    }
    else if (uVar1 < 0xb) {
      FUN_10323b89c(puVar3);
      *puVar3 = param_2[0xe];
    }
    else {
      *puVar3 = uVar1;
      func_0x000107c61434();
      func_0x000107c6142c(uVar4);
    }
  }
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  return param_1;
}



/* Entry: 10323b89c; end: 10323b8e3;  */

undefined8 FUN_10323b89c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4da78;
  func_0x0001000285a8(0x112f4da78,&UNK_10db9fed0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10323b8e4; end: 10323ba47;  */

undefined8 * FUN_10323b8e4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1[3] == 0) {
LAB_10323b968:
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar4;
    lVar1 = param_1[0xb];
  }
  else {
    if (param_2[3] == 0) {
      FUN_10322b438(param_1);
      goto LAB_10323b968;
    }
    func_0x0001000834e4(param_1);
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
    puVar2 = param_1 + 6;
    uVar3 = param_2[6];
    if (*puVar2 < 0xb) {
LAB_10323b958:
      *puVar2 = uVar3;
    }
    else {
      if (uVar3 < 0xb) {
        FUN_10323b89c(puVar2);
        goto LAB_10323b958;
      }
      *puVar2 = uVar3;
      func_0x000107c6142c();
    }
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    lVar1 = param_1[0xb];
  }
  if (lVar1 == 0) {
LAB_10323ba08:
    uVar4 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
    uVar4 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
    *(undefined8 *)((long)param_1 + 0x69) = uVar4;
    return param_1;
  }
  if (param_2[0xb] == 0) {
    FUN_10322b438(param_1 + 8);
    goto LAB_10323ba08;
  }
  func_0x0001000834e4(param_1 + 8);
  uVar4 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[0xc] = param_2[0xc];
  puVar2 = param_1 + 0xe;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
  uVar3 = param_2[0xe];
  if (10 < *puVar2) {
    if (10 < uVar3) {
      *puVar2 = uVar3;
      func_0x000107c6142c();
      goto LAB_10323ba2c;
    }
    FUN_10323b89c(puVar2);
  }
  *puVar2 = uVar3;
LAB_10323ba2c:
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  return param_1;
}



/* Entry: 10323ba48; end: 10323bb27;  */

int FUN_10323ba48(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x79) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10323bb28; end: 10323bd27;  */

void FUN_10323bb28(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  puStack_d0 = param_1 + 8;
  param_1[9] = 0;
  *puStack_d0 = 0;
  *(undefined8 *)((long)param_1 + 0x31) = 0;
  *(undefined8 *)((long)param_1 + 0x29) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
    func_0x000107c6142c();
    lVar8 = param_1[0xb];
  }
  else {
    lVar7 = param_2 + 0x20;
    lStack_d8 = param_2;
    do {
      FUN_1031ddb84(lVar7,auStack_88);
      FUN_1031ddc20(auStack_88,auStack_b0);
      lVar2 = lStack_90;
      uVar1 = uStack_98;
      func_0x0001000a8868(auStack_b0,uStack_98);
      lVar3 = 0;
      func_0x000107c614b8(0,lVar2,uVar1,&UNK_10e804840,&UNK_10e804858);
      lVar5 = *(long *)(lVar3 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      puVar6 = auStack_e0 + -extraout_x8;
      (**(code **)(lVar2 + 0x28))(puVar6,uVar1,lVar2);
      puVar4 = auStack_c8;
      func_0x000107c6147c(puVar4,puVar6,lVar3,&UNK_11076ac50,0);
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = auStack_c8;
        func_0x000107c6147c(puVar4,puVar6,lVar3,&UNK_11076ad50,0);
        if ((int)puVar4 != 0) {
          func_0x000107c6142c(uStack_c0);
          func_0x0001000a8868(auStack_b0,uStack_98);
          goto LAB_10323bb9c;
        }
      }
      else {
        func_0x000107c6142c(uStack_c0);
        func_0x0001000a8868(auStack_b0,uStack_98);
LAB_10323bb9c:
        FUN_103250620();
      }
      (**(code **)(lVar5 + 8))(puVar6,lVar3);
      func_0x0001000834e4(auStack_b0);
      lVar7 = lVar7 + 0x28;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    func_0x000107c6142c(lStack_d8);
    if (param_1[3] != 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
    }
    lVar8 = param_1[0xb];
  }
  if (lVar8 != 0) {
    *(undefined1 *)((long)param_1 + 0x69) = 1;
  }
  return;
}



/* Entry: 10323bd28; end: 10323bd93;  */

long FUN_10323bd28(long param_1)

{
  undefined *puVar1;
  
  FUN_10323d4b4();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  puVar1 = &UNK_10dba0ce0;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x20) = puVar1;
  puVar1 = &UNK_10dba0d00;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x28) = puVar1;
  return param_1;
}



/* Entry: 10323bd94; end: 10323bda3;  */

uint FUN_10323bd94(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  uVar2 = param_2;
  (**(code **)(param_3 + 0x10))(param_2,param_3);
  uVar4 = 0x112f4da60;
  uStack_70 = param_2;
  lStack_68 = param_3;
  uStack_60 = param_1;
  func_0x00010002969c(0x112f4da60,&UNK_10db9feb0);
  uVar3 = 0xff;
  func_0x000107c606f0(0xff,param_2,uVar4);
  uVar4 = 0;
  func_0x000107c5fc80(0,uVar3);
  puVar5 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar4);
  uVar1 = 0;
  func_0x000107c5fc18(FUN_10324b3c4,auStack_80,uVar4,puVar5);
  func_0x000107c6142c(uVar2);
  return uVar1 & 1;
}



/* Entry: 10323bda4; end: 10323be53;  */

undefined1  [16] FUN_10323bda4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0x112f4d830;
  func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined **)(lVar1 + 0x38) = &UNK_11076ac50;
  lVar2 = lVar1;
  func_0x00010322b020();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0x6172656d6163;
  *(undefined8 *)(lVar1 + 0x28) = 0xe600000000000000;
  *(undefined1 *)(lVar1 + 0x30) = 0;
  *(undefined **)(lVar1 + 0x60) = &UNK_11076ad50;
  func_0x00010322afe0();
  *(long *)(lVar1 + 0x68) = lVar2;
  *(undefined8 *)(lVar1 + 0x48) = 0x656d686361747461;
  *(undefined8 *)(lVar1 + 0x50) = 0xea0000000000746e;
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10323be54; end: 10323be73;  */

void FUN_10323be54(void)

{
  func_0x000107c61168(&PTR_PTR_1128c2a60);
  return;
}



/* Entry: 10323be74; end: 10323be8b;  */

undefined8 FUN_10323be74(void)

{
  return 1;
}



/* Entry: 10323be8c; end: 10323bf1f;  */

void FUN_10323be8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = param_2;
  FUN_10323be54();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_4);
  FUN_10323bf20(param_2,param_3,param_4,uVar2);
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11062a348;
  *param_1 = param_2;
  return;
}



/* Entry: 10323bf20; end: 10323c5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10323bf20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long unaff_x20;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  
  lVar5 = _DAT_112f4e280;
  uVar3 = 0;
  FUN_103255900();
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  *(undefined8 *)(unaff_x20 + lVar5) = uVar3;
  lVar5 = _DAT_112f4e288;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e298);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar5 = _DAT_112f4e2a0;
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar5) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e2a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 1;
  *(undefined8 *)((long)puVar1 + 0x71) = 0;
  *(undefined8 *)((long)puVar1 + 0x69) = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e2b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e2c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e2c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar5 = unaff_x20 + _DAT_112f4e2d0;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61614(lVar5,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f4e2d8) = 0;
  *(undefined8 *)(lVar5 + 8) = param_2;
  func_0x000107c61604();
  puStack_90 = &UNK_11062c140;
  ppuStack_88 = &PTR_DAT_11062c0c8;
  auStack_a8[0] = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  FUN_10324f680(0);
  func_0x000107c613fc();
  puVar6 = auStack_a8;
  FUN_10324f14c();
  *(undefined1 **)(unaff_x20 + _DAT_112f4e2b0) = puVar6;
  *(long *)(unaff_x20 + _DAT_112f4e290) = param_4;
  uVar3 = *(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_1103457d8;
  uVar14 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8);
  uVar15 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10);
  uVar16 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18);
  lVar7 = param_4;
  func_0x000107c6157c();
  FUN_103258a9c(uVar3,uVar14,uVar15,uVar16);
  func_0x000107c61180();
  func_0x000107c61174();
  pcVar8 = FUN_10323c788;
  func_0x0001000bfde0(FUN_10323c788,0,&UNK_11062b990);
  pcVar13 = pcVar8;
  FUN_103230518();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar8);
  puVar4 = &UNK_11062a378;
  func_0x000107c613fc(&UNK_11062a378,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,lVar7);
  func_0x000107c61170(lVar7);
  pcVar8 = FUN_10323d5ec;
  puVar11 = puVar4;
  (**(code **)(*(long *)pcVar13 + 0x60))(FUN_10323d5ec);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(puVar4);
  func_0x000107c614f0(pcVar8);
  uVar3 = *(undefined8 *)(lVar7 + _DAT_112f4e288);
  pcVar13 = *(code **)(puVar11 + 0x10);
  func_0x000107c6157c(uVar3);
  (*pcVar13)();
  func_0x000107c615e8(pcVar8);
  func_0x000107c61574(uVar3);
  lVar2 = _DAT_112f4e2a0;
  func_0x000107c59594(0x4010000000000000,*(undefined8 *)(lVar7 + _DAT_112f4e2a0));
  func_0x000107c54280(*(undefined8 *)(lVar7 + lVar2));
  lVar5 = _DAT_112f4e280;
  func_0x000107c5a050(*(undefined8 *)(lVar7 + _DAT_112f4e280));
  lVar9 = lVar7;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c();
  func_0x000107c5a050(*(undefined8 *)(lVar7 + lVar2));
  func_0x000107c3d89c(*(undefined8 *)(lVar7 + lVar5));
  uVar15 = *(undefined8 *)(lVar7 + lVar5);
  func_0x000107c4ac04();
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar11 = puVar10;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar11 + 0x18) = 0x11;
  *(undefined8 *)(puVar11 + 0x10) = 8;
  uVar14 = *(undefined8 *)(lVar7 + lVar5);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar12 = lVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar12);
  *(undefined8 *)(puVar11 + 0x20) = uVar3;
  uVar14 = *(undefined8 *)(lVar7 + lVar5);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar12 = lVar9;
  func_0x000107c4acb0(lVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar3 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar12);
  *(undefined8 *)(puVar11 + 0x28) = uVar3;
  uVar14 = *(undefined8 *)(lVar7 + lVar5);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar12 = lVar9;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar3 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar12);
  *(undefined8 *)(puVar11 + 0x30) = uVar3;
  uVar14 = *(undefined8 *)(lVar7 + lVar5);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar5 = lVar9;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar3 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(puVar11 + 0x38) = uVar3;
  uVar16 = *(undefined8 *)(lVar7 + lVar2);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar14 = uVar15;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar3 = uVar16;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(puVar11 + 0x40) = uVar3;
  uVar16 = *(undefined8 *)(lVar7 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar14 = uVar15;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar3 = uVar16;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(puVar11 + 0x48) = uVar3;
  uVar16 = *(undefined8 *)(lVar7 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar3 = uVar15;
  func_0x000107c3ec1c(uVar15);
  func_0x000107c61180();
  uVar14 = uVar16;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(puVar11 + 0x50) = uVar14;
  uVar16 = *(undefined8 *)(lVar7 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar14 = uVar15;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar3 = uVar16;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(puVar11 + 0x58) = uVar3;
  uVar3 = 0;
  FUN_10323d51c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar4 = puVar11;
  func_0x000107c5fc48(puVar11,uVar3);
  func_0x000107c61574(puVar11);
  func_0x000107c3d048(puVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar4);
  return lVar9;
}



/* Entry: 10323c5e8; end: 10323c5ff;  */

undefined ** FUN_10323c5e8(void)

{
  return &PTR_DAT_11062b808;
}



/* Entry: 10323c600; end: 10323c65b;  */

void FUN_10323c600(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 10323c65c; end: 10323c6b7;  */

undefined8 * FUN_10323c65c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10323c6b8; end: 10323c6f3;  */

undefined8 * FUN_10323c6b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10323c6f4; end: 10323c787;  */

int FUN_10323c6f4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10323c788; end: 10323c8a3;  */

void FUN_10323c788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_40 = param_2[6];
  uVar3 = param_2[7];
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  FUN_10323d5f4(&uStack_70,auStack_a8,0x112f4da70,&UNK_10dba0dd0);
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  FUN_10324f890(uVar3,uVar1,uVar2,&uStack_70);
  *param_1 = uVar3;
  return;
}



/* Entry: 10323c8a4; end: 10323cc97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323c8a4(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_5f;
  
  lVar11 = unaff_x20;
  func_0x000107c614f0();
  FUN_10323d5f4(param_1,&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_b8 == 0) {
    func_0x00010323d5ac(&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    lStack_78 = lStack_b8;
    uStack_80 = uStack_c0;
    uStack_70 = uStack_b0;
    uStack_5f = uStack_9f;
    puVar2 = &uStack_90;
    lVar4 = lVar11;
    FUN_10324b878(puVar2,lVar11,&PTR_DAT_112f4e308,&PTR_DAT_11062c210);
    func_0x000107c5381c(0x447a0000);
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112f4e2a0));
    FUN_10322b438(&uStack_90);
    plVar1 = (long *)(unaff_x20 + _DAT_112f4e2c0);
    lVar3 = *plVar1;
    *plVar1 = (long)puVar2;
    plVar1[1] = lVar4;
    func_0x000107c61170(lVar3);
  }
  FUN_10323d5f4(param_1 + 0x40,&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_b8 == 0) {
    func_0x00010323d5ac(&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    lStack_78 = lStack_b8;
    uStack_80 = uStack_c0;
    uStack_70 = uStack_b0;
    uStack_5f = uStack_9f;
    puVar2 = &uStack_90;
    FUN_10324b878(puVar2,lVar11,&PTR_DAT_112f4e308,&PTR_DAT_11062c210);
    func_0x000107c5381c(0x447a0000);
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112f4e2a0));
    FUN_10322b438(&uStack_90);
    plVar1 = (long *)(unaff_x20 + _DAT_112f4e2c8);
    lVar4 = *plVar1;
    *plVar1 = (long)puVar2;
    plVar1[1] = lVar11;
    func_0x000107c61170(lVar4);
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_112f4e2c0);
  if (lVar11 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f4e2c8);
    if (lVar4 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar6 = puVar5;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar6 + 0x18) = 3;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      func_0x000107c61174();
      func_0x000107c61174(lVar4);
      lVar3 = lVar11;
      func_0x000107c5e308();
      func_0x000107c61180();
      lVar7 = lVar4;
      func_0x000107c5e308(lVar4);
      func_0x000107c61180();
      lVar8 = lVar3;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar7);
      *(long *)(puVar6 + 0x20) = lVar8;
      uVar9 = 0;
      FUN_10323d51c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar10 = puVar6;
      func_0x000107c5fc48(puVar6,uVar9);
      func_0x000107c61574(puVar6);
      func_0x000107c3d048(puVar5);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar10);
    }
  }
  return;
}



/* Entry: 10323cc98; end: 10323cd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323cc98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112f4e2d0;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c61174();
    (*pcVar4)(&stack0xffffffffffffff78,param_1,param_2,param_3,param_4,param_5,param_6,lVar2,lVar3);
    func_0x000107c615e8(lVar1);
    func_0x0001000834e4(&stack0xffffffffffffff78);
  }
  return;
}



/* Entry: 10323cd84; end: 10323cdaf; -[_TtC30SCContextTryOnActionItemPlugin26ArAdTryOnActionBarRenderer initWithTouchExtension:] */

void FUN_10323cd84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextTryOnActionItemPlugin.ArAdTryOnActionBarRenderer",0x39,
                      "init(touchExtension:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10323cdb0);
  (*pcVar1)();
}



/* Entry: 10323cdb0; end: 10323cebb; -[_TtC30SCContextTryOnActionItemPlugin26ArAdTryOnActionBarRenderer init] */

void FUN_10323cdb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextTryOnActionItemPlugin.ArAdTryOnActionBarRenderer",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10323cddc);
  (*pcVar1)();
}



/* Entry: 10323cebc; end: 10323cf73; -[_TtC30SCContextTryOnActionItemPlugin26ArAdTryOnActionBarRenderer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10323cebc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4e280));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4e288));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4e290));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4e2a0));
  func_0x00010323d5ac(param_1 + _DAT_112f4e2a8,0x112f4e3e0,&UNK_10dba0db8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4e2b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4e2c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4e2c8));
  param_1 = param_1 + _DAT_112f4e2d0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10323cf74; end: 10323cf8b;  */

undefined ** FUN_10323cf74(void)

{
  return &PTR_DAT_11062b7d8;
}



/* Entry: 10323cf8c; end: 10323cfd3;  */

void FUN_10323cf8c(void)

{
  FUN_10324d7c8();
  return;
}



/* Entry: 10323cfd4; end: 10323d013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10323cfd4(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + _DAT_112f4e2d8);
}



/* Entry: 10323d014; end: 10323d043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323d014(void)

{
  long unaff_x20;
  
  func_0x000107c61618(unaff_x20 + _DAT_112f4e2d0);
  return;
}



/* Entry: 10323d044; end: 10323d053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323d044(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_112f4e2a0));
  return;
}



/* Entry: 10323d054; end: 10323d09b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10323d054(void)

{
  unkuint9 *pVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auStack_38 [24];
  
  pVar1 = (unkuint9 *)(unaff_x20 + _DAT_112f4e2b8);
  func_0x000107c61428(pVar1,auStack_38,0,0);
  auVar2._9_7_ = 0;
  auVar2._0_9_ = *pVar1;
  return auVar2;
}



/* Entry: 10323d09c; end: 10323d0f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323d09c(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e2b8);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  return;
}



/* Entry: 10323d0f4; end: 10323d133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10323d0f4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4e2b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4e2b8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10323d134;
  return auVar2;
}



/* Entry: 10323d134; end: 10323d137;  */

void FUN_10323d134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10323d138; end: 10323d1f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323d138(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4e2a8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4e2a8,auStack_48,0,0);
  FUN_10323d5f4(unaff_x20 + lVar1,param_1,0x112f4e3e0,&UNK_10dba0db8);
  return;
}



/* Entry: 10323d1f8; end: 10323d237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10323d1f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4e2a8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4e2a8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10323d63c;
  return auVar2;
}



/* Entry: 10323d238; end: 10323d2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323d238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c4bf50(lStack_38,param_3,1);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61434(param_2);
  FUN_10323bb28(param_1);
  return;
}



/* Entry: 10323d2a8; end: 10323d2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323d2a8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_5f;
  
  lVar11 = unaff_x20;
  func_0x000107c614f0();
  FUN_10323d5f4(param_1,&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_b8 == 0) {
    func_0x00010323d5ac(&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    lStack_78 = lStack_b8;
    uStack_80 = uStack_c0;
    uStack_70 = uStack_b0;
    uStack_5f = uStack_9f;
    puVar2 = &uStack_90;
    lVar4 = lVar11;
    FUN_10324b878(puVar2,lVar11,&PTR_DAT_112f4e308,&PTR_DAT_11062c210);
    func_0x000107c5381c(0x447a0000);
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112f4e2a0));
    FUN_10322b438(&uStack_90);
    plVar1 = (long *)(unaff_x20 + _DAT_112f4e2c0);
    lVar3 = *plVar1;
    *plVar1 = (long)puVar2;
    plVar1[1] = lVar4;
    func_0x000107c61170(lVar3);
  }
  FUN_10323d5f4(param_1 + 0x40,&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_b8 == 0) {
    func_0x00010323d5ac(&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    lStack_78 = lStack_b8;
    uStack_80 = uStack_c0;
    uStack_70 = uStack_b0;
    uStack_5f = uStack_9f;
    puVar2 = &uStack_90;
    FUN_10324b878(puVar2,lVar11,&PTR_DAT_112f4e308,&PTR_DAT_11062c210);
    func_0x000107c5381c(0x447a0000);
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112f4e2a0));
    FUN_10322b438(&uStack_90);
    plVar1 = (long *)(unaff_x20 + _DAT_112f4e2c8);
    lVar4 = *plVar1;
    *plVar1 = (long)puVar2;
    plVar1[1] = lVar11;
    func_0x000107c61170(lVar4);
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_112f4e2c0);
  if (lVar11 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f4e2c8);
    if (lVar4 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar6 = puVar5;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar6 + 0x18) = 3;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      func_0x000107c61174();
      func_0x000107c61174(lVar4);
      lVar3 = lVar11;
      func_0x000107c5e308();
      func_0x000107c61180();
      lVar7 = lVar4;
      func_0x000107c5e308(lVar4);
      func_0x000107c61180();
      lVar8 = lVar3;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar7);
      *(long *)(puVar6 + 0x20) = lVar8;
      uVar9 = 0;
      FUN_10323d51c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar10 = puVar6;
      func_0x000107c5fc48(puVar6,uVar9);
      func_0x000107c61574(puVar6);
      func_0x000107c3d048(puVar5);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar10);
    }
  }
  return;
}



/* Entry: 10323d2ac; end: 10323d373;  */

/* WARNING: Possible PIC construction at 0x00010323d31c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010323d320) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323d2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f4e2c0);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f4e2c0))[1];
  uVar4 = uVar1;
  func_0x000107c61174(uVar1);
  FUN_10324d63c(uVar1,uVar2,param_1,lVar3,param_3,&PTR_DAT_11062c210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10323d374; end: 10323d37b;  */

void FUN_10323d374(void)

{
  return;
}



/* Entry: 10323d37c; end: 10323d3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10323d37c(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,ulong param_7)

{
  bool bVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 unaff_x20;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  undefined **ppuVar22;
  ulong uVar23;
  undefined2 uVar24;
  ushort uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined1 auVar29 [16];
  undefined *puStack_830;
  ulong uStack_828;
  long lStack_820;
  code *pcStack_818;
  long lStack_810;
  undefined **ppuStack_808;
  ulong uStack_800;
  undefined8 uStack_7f8;
  undefined1 auStack_7e8 [24];
  undefined8 uStack_7d0;
  ulong uStack_7c8;
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [208];
  ulong uStack_6d8;
  undefined1 auStack_6d0 [208];
  ulong uStack_600;
  undefined1 auStack_5f8 [208];
  ulong uStack_528;
  undefined1 auStack_520 [24];
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  double dStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  double dStack_4a8;
  undefined8 uStack_4a0;
  double dStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_467;
  undefined1 auStack_448 [24];
  undefined8 uStack_430;
  ulong uStack_428;
  undefined *puStack_378;
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  ulong uStack_350;
  ulong uStack_2a0;
  undefined *puStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  double dStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  double dStack_230;
  undefined8 uStack_228;
  double dStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1ef;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double dStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_13f;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_8f;
  
  uVar28 = (undefined2)((ulong)param_1 >> 0x30);
  uVar27 = (undefined2)((ulong)param_1 >> 0x20);
  uVar26 = (undefined2)((ulong)param_1 >> 0x10);
  uVar24 = (undefined2)param_1;
  func_0x000107c614f0();
  ppuStack_808 = &PTR_DAT_11062c210;
  uVar8 = *(undefined8 *)(param_5 + 0x18);
  lVar6 = *(long *)(param_5 + 0x20);
  uStack_800 = param_7;
  uStack_7f8 = unaff_x20;
  func_0x0001000a8868(param_5,uVar8);
  lVar5 = 0;
  func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
  lVar19 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar23 = (long)&puStack_830 - extraout_x8;
  (**(code **)(lVar6 + 0x28))(uVar23,uVar8,lVar6);
  func_0x000107c614b4(lVar6,uVar8,lVar5,&UNK_10e804840,&UNK_10e804850);
  lVar7 = lVar6;
  func_0x00010322b060();
  uVar17 = uVar23;
  FUN_10322b46c(uVar23,lVar5,&UNK_11076af50,lVar6,lVar7);
  lStack_810 = param_5;
  if ((uVar17 & 1) == 0) {
    (**(code **)(lVar19 + 8))(uVar23,lVar5);
LAB_10324ba3c:
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    lVar5 = 0;
    func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
    lVar19 = *(long *)(lVar5 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar21 = uVar23 - extraout_x8_00;
    (**(code **)(lVar6 + 0x28))(uVar21,uVar8,lVar6);
    func_0x000107c614b4(lVar6,uVar8,lVar5,&UNK_10e804840,&UNK_10e804850);
    lVar7 = lVar6;
    func_0x00010322b260();
    uVar17 = uVar21;
    FUN_10322b46c(uVar21,lVar5,&UNK_11076b850,lVar6,lVar7);
    if ((uVar17 & 1) == 0) {
      (**(code **)(lVar19 + 8))(uVar21,lVar5);
    }
    else {
      uVar8 = *(undefined8 *)(param_5 + 0x18);
      lVar6 = *(long *)(param_5 + 0x20);
      func_0x0001000a8868(param_5,uVar8);
      (**(code **)(lVar6 + 0x30))(auStack_5f8,uVar8,lVar6);
      FUN_103202330(uStack_528);
      func_0x00010322ed34(auStack_5f8);
      uVar17 = uStack_528;
      func_0x0001044109f4(uStack_528,3);
      func_0x00010321d6b8(uStack_528);
      (**(code **)(lVar19 + 8))(uVar21,lVar5);
      if ((uVar17 & 1) != 0) goto LAB_10324bb68;
    }
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    lVar5 = 0;
    func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
    lVar19 = *(long *)(lVar5 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar21 = uVar23 - extraout_x8_01;
    (**(code **)(lVar6 + 0x28))(uVar21,uVar8,lVar6);
    func_0x000107c614b4(lVar6,uVar8,lVar5,&UNK_10e804840,&UNK_10e804850);
    lVar7 = lVar6;
    func_0x00010322b1a0();
    uVar17 = uVar21;
    FUN_10322b46c(uVar21,lVar5,&UNK_11076afd0,lVar6,lVar7);
    (**(code **)(lVar19 + 8))(uVar21,lVar5);
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    if ((uVar17 & 1) == 0) {
      puVar10 = (undefined1 *)0x0;
      func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
      lVar5 = *(long *)(puVar10 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      uVar23 = uVar23 - extraout_x8_02;
      (**(code **)(lVar6 + 0x28))(uVar23,uVar8,lVar6);
      func_0x000107c614b4(lVar6,uVar8,puVar10,&UNK_10e804840,&UNK_10e804850);
      lVar7 = lVar6;
      FUN_1032013d4();
      uVar17 = uVar23;
      FUN_10322b46c(uVar23,puVar10,&UNK_11076bad0,lVar6,lVar7);
      (**(code **)(lVar5 + 8))(uVar23);
      if ((uVar17 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_5 + 0x18);
        lVar6 = *(long *)(param_5 + 0x20);
        func_0x0001000a8868(param_5,uVar8);
        (**(code **)(lVar6 + 0x30))(auStack_520,uVar8,lVar6);
        uStack_218 = uStack_490;
        dStack_220 = dStack_498;
        uStack_208 = uStack_480;
        uStack_210 = uStack_488;
        uStack_200 = uStack_478;
        uStack_1ef = uStack_467;
        uStack_248 = uStack_4c0;
        uStack_250 = uStack_4c8;
        uStack_238 = uStack_4b0;
        uStack_240 = uStack_4b8;
        uStack_228 = uStack_4a0;
        dStack_230 = dStack_4a8;
        uStack_288 = uStack_500;
        uStack_290 = uStack_508;
        uStack_278 = uStack_4f0;
        uStack_280 = uStack_4f8;
        uStack_268 = uStack_4e0;
        dStack_270 = dStack_4e8;
        uStack_258 = uStack_4d0;
        uStack_260 = uStack_4d8;
        puVar10 = auStack_370;
        FUN_10324e138(&uStack_290,puVar10,0x112f4d5c8,&UNK_10db9f700);
        func_0x00010322ed34(auStack_520);
        uStack_168 = uStack_218;
        dStack_170 = dStack_220;
        uStack_158 = uStack_208;
        uStack_160 = uStack_210;
        uStack_150 = uStack_200;
        uStack_13f = uStack_1ef;
        uStack_198 = uStack_248;
        uStack_1a0 = uStack_250;
        uStack_188 = uStack_238;
        uStack_190 = uStack_240;
        uStack_178 = uStack_228;
        dStack_180 = dStack_230;
        uStack_1d8 = uStack_288;
        uStack_1e0 = uStack_290;
        uStack_1c8 = uStack_278;
        uStack_1d0 = uStack_280;
        uStack_1b8 = uStack_268;
        dStack_1c0 = dStack_270;
        uStack_1a8 = uStack_258;
        uStack_1b0 = uStack_260;
        iVar4 = (int)&uStack_1e0;
        FUN_103233944();
        if (iVar4 != 1) {
          uStack_b8 = uStack_168;
          dStack_c0 = dStack_170;
          uStack_a8 = uStack_158;
          uStack_b0 = uStack_160;
          uStack_a0 = uStack_150;
          uStack_8f = uStack_13f;
          uStack_e8 = uStack_198;
          uStack_f0 = uStack_1a0;
          uStack_d8 = uStack_188;
          uStack_e0 = uStack_190;
          uStack_c8 = uStack_178;
          dStack_d0 = dStack_180;
          uStack_128 = uStack_1d8;
          uStack_130 = uStack_1e0;
          uStack_118 = uStack_1c8;
          uStack_120 = uStack_1d0;
          uVar24 = (undefined2)uStack_1b0;
          uVar26 = (undefined2)((ulong)uStack_1b0 >> 0x10);
          uVar27 = (undefined2)((ulong)uStack_1b0 >> 0x20);
          uVar28 = (undefined2)((ulong)uStack_1b0 >> 0x30);
          uStack_108 = uStack_1b8;
          dStack_110 = dStack_1c0;
          uStack_f8 = uStack_1a8;
          uStack_100 = uStack_1b0;
          iVar4 = (int)&uStack_130;
          param_2 = dStack_1c0;
          param_3 = dStack_170;
          param_4 = dStack_180;
          FUN_103238538();
          puVar11 = &uStack_130;
          func_0x000100d3e680();
          if (iVar4 == 2) {
            uVar17 = *puVar11;
            puVar10 = (undefined1 *)0x0;
            FUN_1032584ac();
            func_0x000107c610f8();
            func_0x000107c453e4();
            if (uVar17 >> 0x3e == 0) {
              uStack_828 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar23 = uVar17 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar17) {
                uVar23 = uVar17;
              }
              func_0x000107c60480();
              uStack_828 = uVar23;
            }
            uVar17 = uStack_800;
            func_0x00010324e180(&uStack_290,0x112f4d5c8,&UNK_10db9f700);
            uVar8 = *(undefined8 *)(param_5 + 0x18);
            lVar6 = *(long *)(param_5 + 0x20);
            func_0x0001000a8868(param_5,uVar8);
            (**(code **)(lVar6 + 0x30))(auStack_448,uVar8,lVar6);
            puStack_298 = puStack_378;
            FUN_1032436a4(&puStack_298,auStack_370);
            func_0x00010322ed34(auStack_448);
            puVar12 = puStack_298;
            if (puStack_298 < (undefined *)0xb) {
              FUN_10322b8e8(&puStack_298);
              puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            uVar23 = uStack_828;
            if ((long)uStack_828 < 0) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x10324c6e0);
              (*pcVar20)();
            }
            if (uStack_828 == 0) {
              func_0x000107c6142c();
              ppuVar22 = &PTR_DAT_11062c160;
              uVar8 = uStack_7f8;
            }
            else {
              uStack_800 = *(ulong *)(puVar12 + 0x10);
              pcStack_818 = *(code **)(uVar17 + 0x38);
              lStack_820 = _DAT_112f4eec0;
              puStack_830 = puVar12;
              func_0x000107c61428(puVar10 + _DAT_112f4eec0,auStack_7c0,0,0);
              uVar21 = 0;
              do {
                if (uVar21 < uStack_800) {
                  if (*(ulong *)(puStack_830 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
                    pcVar20 = (code *)SoftwareBreakpoint(1,0x10324c6c4);
                    (*pcVar20)();
                  }
                  uVar18 = *(ulong *)(puStack_830 + uVar21 * 8 + 0x20);
                  FUN_103202330(uVar18);
                }
                else {
                  uVar8 = *(undefined8 *)(param_5 + 0x18);
                  lVar6 = *(long *)(param_5 + 0x20);
                  func_0x0001000a8868(param_5,uVar8);
                  uVar23 = uStack_828;
                  (**(code **)(lVar6 + 0x30))(auStack_370,uVar8,lVar6);
                  uVar18 = uStack_2a0;
                  FUN_103202330(uStack_2a0);
                  func_0x00010322ed34(auStack_370);
                }
                uVar21 = uVar21 + 1;
                uVar13 = uVar18;
                FUN_10324e47c(uVar18);
                func_0x00010321d6b8(uVar18);
                uVar8 = uStack_7f8;
                uVar9 = 0;
                func_0x000107c614b8(0,uVar17,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
                uVar18 = uVar17;
                uStack_7d0 = uVar9;
                func_0x000107c614b4(uVar17,uVar8,uVar9,&UNK_10e75223c,&UNK_10e75224c);
                puVar15 = auStack_7e8;
                uStack_7c8 = uVar18;
                func_0x0001000c5db4(puVar15);
                (*pcStack_818)(puVar15,uVar8,uVar17);
                func_0x000103254b00(0);
                func_0x000107c610f8();
                param_2 = 0.0;
                param_3 = 0.0;
                param_4 = 0.0;
                uVar8 = 3;
                FUN_1032516ac(0,3,uVar13,0,auStack_7e8,0,0);
                func_0x000107c5a050();
                uVar24 = 0;
                FUN_103253cf0(0,1);
                uVar26 = 0x437a;
                uVar27 = 0;
                uVar28 = 0;
                func_0x000103253e20(1);
                func_0x000107c3d5b4(*(undefined8 *)(puVar10 + lStack_820));
                func_0x000107c61170(uVar8);
              } while (uVar23 != uVar21);
              func_0x000107c6142c(puStack_830);
              ppuVar22 = &PTR_DAT_11062c160;
              uVar8 = uStack_7f8;
            }
            goto LAB_10324c464;
          }
          puVar10 = (undefined1 *)0x112f4d5c8;
          func_0x00010324e180(&uStack_290,0x112f4d5c8,&UNK_10db9f700);
        }
      }
      FUN_10324e4e0();
      if (puVar10 == (undefined1 *)0x0) {
        uVar8 = *(undefined8 *)(param_5 + 0x30);
        FUN_10324e47c(uVar8);
      }
      else {
        func_0x000107c6142c(puVar10);
        uVar8 = 4;
      }
      uVar17 = uStack_800;
      puVar10 = *(undefined1 **)(param_5 + 0x18);
      uVar9 = *(undefined8 *)(param_5 + 0x20);
      lVar6 = param_5;
      func_0x0001000a8868(param_5,puVar10);
      FUN_10324e314(puVar10,uVar9,lVar6);
      uVar9 = uStack_7f8;
      uVar2 = *(undefined1 *)(param_5 + 0x29);
      pcVar20 = *(code **)(uVar17 + 0x38);
      uVar14 = 0;
      func_0x000107c614b8(0,uVar17,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
      uVar23 = uVar17;
      uStack_358 = uVar14;
      func_0x000107c614b4(uVar17,uVar9,uVar14,&UNK_10e75223c,&UNK_10e75224c);
      puVar15 = auStack_370;
      uStack_350 = uVar23;
      func_0x0001000c5db4(puVar15);
      (*pcVar20)(puVar15,uVar9,uVar17);
      func_0x000103254b00(0);
      func_0x000107c610f8();
      uVar24 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      param_2 = 0.0;
      param_3 = 0.0;
      param_4 = 0.0;
      FUN_1032516ac(puVar10,uVar8,uVar2,auStack_370,0,0);
      uVar23 = *(ulong *)(param_5 + 0x30);
      func_0x0001044109f4(uVar23,3);
      if ((uVar23 & 1) != 0) {
        func_0x000107c59c74(*(undefined8 *)(puVar10 + _DAT_112f4ecc0));
      }
      ppuVar22 = &PTR_DAT_11062bac0;
      uVar8 = uStack_7f8;
    }
    else {
      (**(code **)(lVar6 + 0x30))(auStack_370,uVar8,lVar6);
      FUN_103202330(uStack_2a0);
      func_0x00010322ed34(auStack_370);
      uVar23 = uStack_2a0;
      func_0x0001044109f4(uStack_2a0,1);
      func_0x00010321d6b8(uStack_2a0);
      puVar10 = *(undefined1 **)(param_5 + 0x18);
      uVar8 = *(undefined8 *)(param_5 + 0x20);
      lVar6 = param_5;
      func_0x0001000a8868(param_5,puVar10);
      FUN_10324e314(puVar10,uVar8,lVar6);
      uVar17 = uStack_800;
      uVar2 = *(undefined1 *)(param_5 + 0x29);
      uVar8 = 0;
      func_0x000107c614b8(0,uStack_800,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
      uVar21 = uVar17;
      func_0x000107c614b4(uVar17,uStack_7f8,uVar8,&UNK_10e75223c,&UNK_10e75224c);
      bVar1 = (uVar23 & 1) == 0;
      uStack_430 = uVar8;
      uStack_428 = uVar21;
      if (bVar1) {
        pcVar20 = *(code **)(uVar17 + 0x38);
        puVar15 = auStack_448;
        func_0x0001000c5db4(puVar15);
        (*pcVar20)(puVar15,uStack_7f8,uVar17);
        func_0x000103254b00(0);
        func_0x000107c610f8();
      }
      else {
        pcVar20 = *(code **)(uVar17 + 0x38);
        puVar15 = auStack_448;
        func_0x0001000c5db4(puVar15);
        (*pcVar20)(puVar15,uStack_7f8,uVar17);
        func_0x000103254b00(0);
        func_0x000107c610f8();
      }
      param_4 = 0.0;
      param_3 = 0.0;
      param_2 = 0.0;
      uVar28 = 0;
      uVar27 = 0;
      uVar26 = 0;
      uVar24 = 0;
      FUN_1032516ac(puVar10,!bVar1,uVar2,auStack_448,0,0);
      ppuVar22 = &PTR_DAT_11062bac0;
      uVar8 = uStack_7f8;
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    (**(code **)(lVar6 + 0x30))(auStack_7a8,uVar8,lVar6);
    FUN_103202330(uStack_6d8);
    func_0x00010322ed34(auStack_7a8);
    uVar17 = uStack_6d8;
    func_0x0001044109f4(uStack_6d8,1);
    func_0x00010321d6b8(uStack_6d8);
    (**(code **)(lVar19 + 8))(uVar23,lVar5);
    if ((uVar17 & 1) != 0) goto LAB_10324ba3c;
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    (**(code **)(lVar6 + 0x30))(auStack_6d0,uVar8,lVar6);
    FUN_103202330(uStack_600);
    func_0x00010322ed34(auStack_6d0);
    uVar17 = uStack_600;
    func_0x0001044109f4(uStack_600,0);
    func_0x00010321d6b8(uStack_600);
    if ((uVar17 & 1) != 0) goto LAB_10324ba3c;
LAB_10324bb68:
    uVar17 = uStack_800;
    pcVar20 = *(code **)(uStack_800 + 0x38);
    uVar8 = 0;
    func_0x000107c614b8(0,uStack_800,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
    uVar23 = uVar17;
    uStack_358 = uVar8;
    func_0x000107c614b4(uVar17,uStack_7f8,uVar8,&UNK_10e75223c,&UNK_10e75224c);
    puVar10 = auStack_370;
    uStack_350 = uVar23;
    func_0x0001000c5db4(puVar10);
    (*pcVar20)(puVar10,uStack_7f8,uVar17);
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    uVar9 = *(undefined8 *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    FUN_10324e314(uVar8,uVar9,param_5);
    uVar9 = 0;
    FUN_103256bf4(0);
    func_0x000107c610f8();
    puVar10 = auStack_370;
    FUN_1032559a8(puVar10,uVar8,uVar9);
    ppuVar22 = &PTR_DAT_11062bf78;
    uVar8 = uStack_7f8;
  }
LAB_10324c464:
  ppuVar3 = ppuStack_808;
  pcVar20 = (code *)ppuStack_808[1];
  (*pcVar20)(uVar8,ppuStack_808);
  uVar25 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                        *(double *)
                                         (PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18)),
                               CONCAT24(-(ushort)(param_3 ==
                                                 *(double *)
                                                  (PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10
                                                  )),
                                        CONCAT22(-(ushort)(param_2 ==
                                                          *(double *)
                                                           (
                                                  PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8)),
                                                 -(ushort)((double)CONCAT26(uVar28,CONCAT24(uVar27,
                                                  CONCAT22(uVar26,uVar24))) ==
                                                  *(double *)
                                                   PTR__NSDirectionalEdgeInsetsZero_1103457d8)))),2)
  ;
  if ((uVar25 & 1) == 0) {
    puVar15 = puVar10;
    func_0x000107c614f0(puVar10);
    (*pcVar20)(uVar8,ppuVar3);
    (**(code **)(ppuVar22[1] + 0x10))(puVar15);
  }
  uVar9 = uVar8;
  uVar23 = uVar17;
  (**(code **)(uVar17 + 0x40))(uVar8);
  if (((uint)uVar23 & 0xff) != 1) {
    func_0x000107c614f0(puVar10);
    (*(code *)ppuVar22[7])((short)uVar9);
  }
  (**(code **)(uVar17 + 0xb8))(puVar10,ppuVar22,lStack_810,uVar8,uVar17);
  func_0x000107c5a050(puVar10);
  pcVar20 = *(code **)(uVar17 + 0x50);
  uVar9 = uVar8;
  (*pcVar20)(uVar8,uVar17);
  func_0x000107c3d89c();
  func_0x000107c61170(uVar9);
  puVar15 = puVar10;
  func_0x000107c5cbe4(puVar10);
  func_0x000107c61180();
  uVar9 = uVar8;
  (*pcVar20)(uVar8,uVar17);
  uVar14 = uVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  puVar16 = puVar15;
  func_0x000107c40280(puVar15);
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c521e8(puVar16);
  func_0x000107c61170(puVar16);
  puVar15 = puVar10;
  func_0x000107c3ec1c(puVar10);
  func_0x000107c61180();
  (*pcVar20)(uVar8,uVar17);
  uVar9 = uVar8;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  puVar16 = puVar15;
  func_0x000107c40280(puVar15);
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c521e8(puVar16);
  func_0x000107c61170(puVar16);
  auVar29._8_8_ = ppuVar22;
  auVar29._0_8_ = puVar10;
  return auVar29;
}



/* Entry: 10323d3c0; end: 10323d477;  */

/* WARNING: Possible PIC construction at 0x00010324c894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324c8fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324cb18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ccb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010324ce0c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce88) */
/* WARNING: Removing unreachable block (ram,0x00010324ccb8) */
/* WARNING: Removing unreachable block (ram,0x00010324cb1c) */
/* WARNING: Removing unreachable block (ram,0x00010324c900) */
/* WARNING: Removing unreachable block (ram,0x00010324c9d0) */
/* WARNING: Removing unreachable block (ram,0x00010324c9a0) */
/* WARNING: Removing unreachable block (ram,0x00010324c9d4) */
/* WARNING: Removing unreachable block (ram,0x00010324cb24) */
/* WARNING: Removing unreachable block (ram,0x00010324cc28) */
/* WARNING: Removing unreachable block (ram,0x00010324ce8c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce90) */
/* WARNING: Removing unreachable block (ram,0x00010324cb3c) */
/* WARNING: Removing unreachable block (ram,0x00010324cc30) */
/* WARNING: Removing unreachable block (ram,0x00010324cc04) */
/* WARNING: Removing unreachable block (ram,0x00010324cc34) */
/* WARNING: Removing unreachable block (ram,0x00010324ccdc) */
/* WARNING: Removing unreachable block (ram,0x00010324ce1c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce24) */
/* WARNING: Removing unreachable block (ram,0x00010324ccec) */
/* WARNING: Removing unreachable block (ram,0x00010324cda8) */
/* WARNING: Removing unreachable block (ram,0x00010324cd98) */
/* WARNING: Removing unreachable block (ram,0x00010324cdf8) */
/* WARNING: Removing unreachable block (ram,0x00010324cc4c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce80) */
/* WARNING: Removing unreachable block (ram,0x00010324cca8) */
/* WARNING: Removing unreachable block (ram,0x00010324ca98) */
/* WARNING: Removing unreachable block (ram,0x00010324c898) */
/* WARNING: Removing unreachable block (ram,0x00010324ce70) */
/* WARNING: Removing unreachable block (ram,0x00010324ce84) */

void FUN_10323d3c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar5;
  undefined1 auStack_4c0 [8];
  undefined **ppuStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_488;
  undefined1 auStack_480 [24];
  undefined8 uStack_468;
  long lStack_460;
  
  func_0x000107c614f0();
  uVar1 = 0;
  FUN_1032584ac(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 == 0) {
    ppuStack_4b8 = &PTR_DAT_11062c210;
    uStack_4a8 = param_2;
    uStack_4a0 = param_5;
    uStack_488 = param_3;
    FUN_1031ddb84(param_3,auStack_480);
    lVar2 = param_1;
    func_0x000107c614f0();
    lStack_4b0 = lVar2;
    func_0x0001000a8868(auStack_480,uStack_468);
    lVar3 = 0;
    func_0x000107c614b8(0,lStack_460,uStack_468,&UNK_10e804840,&UNK_10e804858);
    lVar5 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lStack_460 + 0x28))(auStack_4c0 + -extraout_x8,uStack_468,lStack_460);
    func_0x000107c614b4(lStack_460,uStack_468,lVar3,&UNK_10e804840,&UNK_10e804850);
    lVar2 = lVar3;
    lVar4 = lStack_460;
    (**(code **)(lStack_460 + 0x18))(lVar3,lStack_460);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    (**(code **)(lVar5 + 8))(auStack_4c0 + -extraout_x8,lVar3);
    func_0x000107c520f4(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x00010324ceb8(lVar2,param_3,unaff_x20,param_5,&PTR_DAT_11062c210);
    lVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10323d478; end: 10323d4af;  */

void FUN_10323d478(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_10324e314(uVar1,uVar2,param_1);
  return;
}



/* Entry: 10323d4b0; end: 10323d4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323d4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112f4e2d0;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c61174();
    (*pcVar4)(&stack0xffffffffffffff78,param_1,param_2,param_3,param_4,param_5,param_6,lVar2,lVar3);
    func_0x000107c615e8(lVar1);
    func_0x0001000834e4(&stack0xffffffffffffff78);
  }
  return;
}



/* Entry: 10323d4b4; end: 10323d51b;  */

/* WARNING: Possible PIC construction at 0x00010323d4e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010323d4e8) */
/* WARNING: Removing unreachable block (ram,0x00010323d4ec) */

void FUN_10323d4b4(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112f4e3e8;
    plVar5 = (long *)&UNK_10dba0dc0;
  }
  else {
    puVar3 = (ulong *)0x112f4e3f0;
    plVar5 = (long *)&UNK_10dba0dc8;
    unaff_x30 = 0x10323d4e8;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 10323d51c; end: 10323d5eb;  */

void FUN_10323d51c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10323d5ec; end: 10323d5f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323d5ec(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    plVar3 = *(long **)(lVar1 + _DAT_112f4e2b0);
    func_0x000107c6157c(plVar3);
    func_0x000107c61170(lVar1);
    pcVar4 = *(code **)(*plVar3 + 0x68);
    func_0x000107c61174(uVar2);
    (*pcVar4)(uVar2);
    func_0x000107c61574(plVar3);
  }
  return;
}



/* Entry: 10323d5f4; end: 10323d63b;  */

undefined8 FUN_10323d5f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10323d63c; end: 10323d647;  */

void FUN_10323d63c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10323d648; end: 10323d707;  */

undefined1  [16] FUN_10323d648(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6e6f797274;
  func_0x000107c5fadc(0x6e6f797274,0xe500000000000000);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f131bc0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10323d708);
  (*pcVar1)();
}



/* Entry: 10323d708; end: 10323d753;  */

void FUN_10323d708(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4d828,&UNK_10db9fbf0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10323d754,param_1);
  return;
}



/* Entry: 10323d754; end: 10323d7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323d754(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lStack_38;
  undefined8 uVar3;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_1130778f0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar3 = uVar2;
  func_0x000107c4ab80();
  iVar1 = (int)uVar3;
  func_0x000107c61170(uVar2);
  func_0x0001084360d0();
  if (iVar1 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_10323fe1c(param_1);
  }
  return;
}



/* Entry: 10323d7e4; end: 10323d7f3;  */

undefined1  [16] FUN_10323d7e4(void)

{
  return ZEXT816(0x11062a470);
}



/* Entry: 10323d7f4; end: 10323d9fb;  */

long FUN_10323d7f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10323d9fc; end: 10323dd6f;  */

undefined8 * FUN_10323d9fc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar2 != 0) {
      param_1[3] = lVar2;
      param_1[4] = param_2[4];
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
      uVar1 = param_2[6];
      if (10 < uVar1) {
        func_0x000107c61434();
      }
      param_1[6] = uVar1;
      goto LAB_10323db24;
    }
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    uVar10 = param_2[5];
    uVar9 = param_2[4];
    uVar11 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar11;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    param_1[5] = uVar10;
    param_1[4] = uVar9;
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  else if (lVar2 == 0) {
    FUN_10322b438(param_1);
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    uVar7 = *(undefined8 *)((long)param_2 + 0x29);
    uVar11 = param_2[1];
    uVar10 = *param_2;
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar7;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
    param_1[1] = uVar11;
    *param_1 = uVar10;
  }
  else {
    func_0x000100083374(param_1,param_2);
    puVar3 = param_1 + 6;
    uVar4 = *puVar3;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
    uVar1 = param_2[6];
    if (uVar4 < 0xb) {
      if (uVar1 < 0xb) {
        *puVar3 = uVar1;
      }
      else {
        *puVar3 = uVar1;
        func_0x000107c61434();
      }
    }
    else if (uVar1 < 0xb) {
      FUN_10323b89c(puVar3);
      *puVar3 = param_2[6];
    }
    else {
      *puVar3 = uVar1;
      func_0x000107c61434();
      func_0x000107c6142c(uVar4);
    }
LAB_10323db24:
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  }
  lVar2 = param_2[0xb];
  if (param_1[0xb] == 0) {
    if (lVar2 == 0) {
      uVar6 = param_2[9];
      uVar5 = param_2[8];
      uVar8 = param_2[0xb];
      uVar7 = param_2[10];
      uVar10 = param_2[0xd];
      uVar9 = param_2[0xc];
      uVar11 = *(undefined8 *)((long)param_2 + 0x69);
      *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
      *(undefined8 *)((long)param_1 + 0x69) = uVar11;
      param_1[0xb] = uVar8;
      param_1[10] = uVar7;
      param_1[0xd] = uVar10;
      param_1[0xc] = uVar9;
      param_1[9] = uVar6;
      param_1[8] = uVar5;
      goto LAB_10323dc44;
    }
    param_1[0xb] = lVar2;
    param_1[0xc] = param_2[0xc];
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 8,param_2 + 8);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
    uVar1 = param_2[0xe];
    if (10 < uVar1) {
      func_0x000107c61434();
    }
    param_1[0xe] = uVar1;
  }
  else {
    if (lVar2 == 0) {
      FUN_10322b438(param_1 + 8);
      uVar9 = param_2[0xb];
      uVar8 = param_2[10];
      uVar6 = param_2[0xd];
      uVar5 = param_2[0xc];
      uVar7 = *(undefined8 *)((long)param_2 + 0x69);
      uVar11 = param_2[9];
      uVar10 = param_2[8];
      *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
      *(undefined8 *)((long)param_1 + 0x69) = uVar7;
      param_1[0xb] = uVar9;
      param_1[10] = uVar8;
      param_1[0xd] = uVar6;
      param_1[0xc] = uVar5;
      param_1[9] = uVar11;
      param_1[8] = uVar10;
      goto LAB_10323dc44;
    }
    func_0x000100083374(param_1 + 8,param_2 + 8);
    puVar3 = param_1 + 0xe;
    uVar4 = *puVar3;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
    uVar1 = param_2[0xe];
    if (uVar4 < 0xb) {
      if (uVar1 < 0xb) {
        *puVar3 = uVar1;
      }
      else {
        *puVar3 = uVar1;
        func_0x000107c61434();
      }
    }
    else if (uVar1 < 0xb) {
      FUN_10323b89c(puVar3);
      *puVar3 = param_2[0xe];
    }
    else {
      *puVar3 = uVar1;
      func_0x000107c61434();
      func_0x000107c6142c(uVar4);
    }
  }
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
LAB_10323dc44:
  lVar2 = param_2[0x13];
  if (param_1[0x13] == 0) {
    if (lVar2 == 0) {
      uVar6 = param_2[0x11];
      uVar5 = param_2[0x10];
      uVar8 = param_2[0x13];
      uVar7 = param_2[0x12];
      uVar10 = param_2[0x15];
      uVar9 = param_2[0x14];
      uVar11 = *(undefined8 *)((long)param_2 + 0xa9);
      *(undefined8 *)((long)param_1 + 0xb1) = *(undefined8 *)((long)param_2 + 0xb1);
      *(undefined8 *)((long)param_1 + 0xa9) = uVar11;
      param_1[0x13] = uVar8;
      param_1[0x12] = uVar7;
      param_1[0x15] = uVar10;
      param_1[0x14] = uVar9;
      param_1[0x11] = uVar6;
      param_1[0x10] = uVar5;
      return param_1;
    }
    param_1[0x13] = lVar2;
    param_1[0x14] = param_2[0x14];
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 0x10,param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
    *(undefined1 *)((long)param_1 + 0xa9) = *(undefined1 *)((long)param_2 + 0xa9);
    uVar1 = param_2[0x16];
    if (10 < uVar1) {
      func_0x000107c61434();
    }
    param_1[0x16] = uVar1;
  }
  else {
    if (lVar2 == 0) {
      FUN_10322b438(param_1 + 0x10);
      uVar9 = param_2[0x13];
      uVar8 = param_2[0x12];
      uVar6 = param_2[0x15];
      uVar5 = param_2[0x14];
      uVar7 = *(undefined8 *)((long)param_2 + 0xa9);
      uVar11 = param_2[0x11];
      uVar10 = param_2[0x10];
      *(undefined8 *)((long)param_1 + 0xb1) = *(undefined8 *)((long)param_2 + 0xb1);
      *(undefined8 *)((long)param_1 + 0xa9) = uVar7;
      param_1[0x13] = uVar9;
      param_1[0x12] = uVar8;
      param_1[0x15] = uVar6;
      param_1[0x14] = uVar5;
      param_1[0x11] = uVar11;
      param_1[0x10] = uVar10;
      return param_1;
    }
    func_0x000100083374(param_1 + 0x10,param_2 + 0x10);
    puVar3 = param_1 + 0x16;
    uVar4 = *puVar3;
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
    *(undefined1 *)((long)param_1 + 0xa9) = *(undefined1 *)((long)param_2 + 0xa9);
    uVar1 = param_2[0x16];
    if (uVar4 < 0xb) {
      if (uVar1 < 0xb) {
        *puVar3 = uVar1;
      }
      else {
        *puVar3 = uVar1;
        func_0x000107c61434();
      }
    }
    else if (uVar1 < 0xb) {
      FUN_10323b89c(puVar3);
      *puVar3 = param_2[0x16];
    }
    else {
      *puVar3 = uVar1;
      func_0x000107c61434();
      func_0x000107c6142c(uVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  return param_1;
}



/* Entry: 10323dd70; end: 10323ddab;  */

void FUN_10323dd70(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar2 = param_2[0x11];
  uVar1 = param_2[0x10];
  uVar4 = param_2[0x13];
  uVar3 = param_2[0x12];
  uVar6 = param_2[0x15];
  uVar5 = param_2[0x14];
  uVar7 = *(undefined8 *)((long)param_2 + 0xa9);
  *(undefined8 *)((long)param_1 + 0xb1) = *(undefined8 *)((long)param_2 + 0xb1);
  *(undefined8 *)((long)param_1 + 0xa9) = uVar7;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  param_1[0x15] = uVar6;
  param_1[0x14] = uVar5;
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  return;
}



/* Entry: 10323ddac; end: 10323dfaf;  */

undefined8 * FUN_10323ddac(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1[3] == 0) {
LAB_10323de30:
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar4;
    if (param_1[0xb] == 0) goto LAB_10323ded0;
LAB_10323de6c:
    if (param_2[0xb] == 0) {
      FUN_10322b438(param_1 + 8);
      goto LAB_10323ded0;
    }
    func_0x0001000834e4(param_1 + 8);
    uVar4 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
    param_1[0xc] = param_2[0xc];
    puVar2 = param_1 + 0xe;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
    uVar3 = param_2[0xe];
    if (*puVar2 < 0xb) {
LAB_10323dec0:
      *puVar2 = uVar3;
    }
    else {
      if (uVar3 < 0xb) {
        FUN_10323b89c(puVar2);
        goto LAB_10323dec0;
      }
      *puVar2 = uVar3;
      func_0x000107c6142c();
    }
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    lVar1 = param_1[0x13];
  }
  else {
    if (param_2[3] == 0) {
      FUN_10322b438(param_1);
      goto LAB_10323de30;
    }
    func_0x0001000834e4(param_1);
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
    puVar2 = param_1 + 6;
    uVar3 = param_2[6];
    if (*puVar2 < 0xb) {
LAB_10323de20:
      *puVar2 = uVar3;
    }
    else {
      if (uVar3 < 0xb) {
        FUN_10323b89c(puVar2);
        goto LAB_10323de20;
      }
      *puVar2 = uVar3;
      func_0x000107c6142c();
    }
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    if (param_1[0xb] != 0) goto LAB_10323de6c;
LAB_10323ded0:
    uVar4 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
    uVar4 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
    *(undefined8 *)((long)param_1 + 0x69) = uVar4;
    lVar1 = param_1[0x13];
  }
  if (lVar1 == 0) {
LAB_10323df70:
    uVar4 = param_2[0x10];
    uVar6 = param_2[0x13];
    uVar5 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
    param_1[0x13] = uVar6;
    param_1[0x12] = uVar5;
    uVar4 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0xa9);
    *(undefined8 *)((long)param_1 + 0xb1) = *(undefined8 *)((long)param_2 + 0xb1);
    *(undefined8 *)((long)param_1 + 0xa9) = uVar4;
    return param_1;
  }
  if (param_2[0x13] == 0) {
    FUN_10322b438(param_1 + 0x10);
    goto LAB_10323df70;
  }
  func_0x0001000834e4(param_1 + 0x10);
  uVar4 = param_2[0x10];
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  param_1[0x14] = param_2[0x14];
  puVar2 = param_1 + 0x16;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((long)param_1 + 0xa9) = *(undefined1 *)((long)param_2 + 0xa9);
  uVar3 = param_2[0x16];
  if (10 < *puVar2) {
    if (10 < uVar3) {
      *puVar2 = uVar3;
      func_0x000107c6142c();
      goto LAB_10323df94;
    }
    FUN_10323b89c(puVar2);
  }
  *puVar2 = uVar3;
LAB_10323df94:
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  return param_1;
}



/* Entry: 10323dfb0; end: 10323e09f;  */

int FUN_10323dfb0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0xb9) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10323e0a0; end: 10323e377;  */

void FUN_10323e0a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  puStack_d0 = param_1 + 8;
  param_1[9] = 0;
  *puStack_d0 = 0;
  puStack_c8 = param_1 + 0x10;
  param_1[0x11] = 0;
  *puStack_c8 = 0;
  *(undefined8 *)((long)param_1 + 0x31) = 0;
  *(undefined8 *)((long)param_1 + 0x29) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  *(undefined8 *)((long)param_1 + 0xa9) = 0;
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 == 0) {
    func_0x000107c6142c();
    lVar7 = param_1[0xb];
  }
  else {
    lVar6 = param_2 + 0x20;
    lStack_d8 = param_2;
    do {
      FUN_1031ddb84(lVar6,auStack_88);
      FUN_1031ddc20(auStack_88,auStack_b0);
      lVar2 = lStack_90;
      uVar1 = uStack_98;
      func_0x0001000a8868(auStack_b0,uStack_98);
      lVar3 = 0;
      func_0x000107c614b8(0,lVar2,uVar1,&UNK_10e804840,&UNK_10e804858);
      lVar8 = *(long *)(lVar3 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      puVar5 = auStack_e0 + -extraout_x8;
      (**(code **)(lVar2 + 0x28))(puVar5,uVar1,lVar2);
      puVar4 = auStack_c0;
      func_0x000107c6147c(puVar4,puVar5,lVar3,&UNK_11076b350,0);
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = auStack_c0;
        func_0x000107c6147c(puVar4,puVar5,lVar3,&UNK_11076b1d0,0);
        if ((int)puVar4 != 0) goto LAB_10323e10c;
        puVar4 = auStack_c0;
        func_0x000107c6147c(puVar4,puVar5,lVar3,&UNK_11076b9d0,0);
        if ((int)puVar4 != 0) goto LAB_10323e10c;
        puVar4 = auStack_c0;
        func_0x000107c6147c(puVar4,puVar5,lVar3,&UNK_11076b650,0);
        if ((int)puVar4 == 0) {
          puVar4 = auStack_c0;
          func_0x000107c6147c(puVar4,puVar5,lVar3,&UNK_11076b4d0,0);
          if ((int)puVar4 != 0) {
            func_0x000107c6142c(uStack_b8);
            func_0x0001000a8868(auStack_b0,uStack_98);
            goto LAB_10323e2e8;
          }
        }
        else {
          func_0x000107c6142c(uStack_b8);
          func_0x0001000a8868(auStack_b0,uStack_98);
LAB_10323e2e8:
          FUN_103250620();
        }
        (**(code **)(lVar8 + 8))(puVar5,lVar3);
      }
      else {
LAB_10323e10c:
        func_0x000107c6142c(uStack_b8);
        (**(code **)(lVar8 + 8))(puVar5,lVar3);
        func_0x0001000a8868(auStack_b0,uStack_98);
        FUN_103250620();
      }
      func_0x0001000834e4(auStack_b0);
      lVar6 = lVar6 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    func_0x000107c6142c(lStack_d8);
    if (param_1[3] != 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    lVar7 = param_1[0xb];
  }
  if (lVar7 != 0) {
    *(undefined1 *)((long)param_1 + 0x69) = 1;
  }
  if (param_1[0x13] != 0) {
    *(undefined1 *)((long)param_1 + 0xa9) = 1;
  }
  return;
}



/* Entry: 10323e378; end: 10323e3f3;  */

long FUN_10323e378(long param_1)

{
  undefined *puVar1;
  
  FUN_10323fa3c();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  puVar1 = &UNK_10dba0ea8;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x20) = puVar1;
  puVar1 = &UNK_10dba0ec8;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x28) = puVar1;
  puVar1 = &UNK_10dba0ee8;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x30) = puVar1;
  return param_1;
}



/* Entry: 10323e3f4; end: 10323e403;  */

uint FUN_10323e3f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  uVar2 = param_2;
  (**(code **)(param_3 + 0x10))(param_2,param_3);
  uVar4 = 0x112f4da60;
  uStack_70 = param_2;
  lStack_68 = param_3;
  uStack_60 = param_1;
  func_0x00010002969c(0x112f4da60,&UNK_10db9feb0);
  uVar3 = 0xff;
  func_0x000107c606f0(0xff,param_2,uVar4);
  uVar4 = 0;
  func_0x000107c5fc80(0,uVar3);
  puVar5 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar4);
  uVar1 = 0;
  func_0x000107c5fc18(FUN_10324b3c4,auStack_80,uVar4,puVar5);
  func_0x000107c6142c(uVar2);
  return uVar1 & 1;
}



/* Entry: 10323e404; end: 10323e97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10323e404(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x20;
  
  lVar10 = _DAT_112f4e3f8;
  uVar4 = 0;
  FUN_103255900();
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  *(undefined8 *)(unaff_x20 + lVar10) = uVar4;
  lVar10 = _DAT_112f4e400;
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar10) = puVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e410);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e418);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e420);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 1;
  *(undefined8 *)((long)puVar1 + 0xb1) = 0;
  *(undefined8 *)((long)puVar1 + 0xa9) = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  lVar6 = unaff_x20 + _DAT_112f4e428;
  *(undefined8 *)(lVar6 + 8) = 0;
  func_0x000107c61614(lVar6,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e430);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f4e438) = 0;
  *(undefined8 *)(lVar6 + 8) = param_2;
  func_0x000107c61604();
  puVar2 = (undefined1 *)(unaff_x20 + _DAT_112f4e408);
  *(undefined **)(puVar2 + 0x18) = &UNK_11062c140;
  *(undefined ***)(puVar2 + 0x20) = &PTR_DAT_11062c0c8;
  *puVar2 = 1;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = 1;
  *(undefined2 *)(puVar2 + 0x28) = 0x101;
  FUN_103258a9c(*(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_1103457d8,
                *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8),
                *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10),
                *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18));
  lVar3 = _DAT_112f4e400;
  uVar4 = *(undefined8 *)(lVar6 + _DAT_112f4e400);
  lVar7 = lVar6;
  func_0x000107c61174();
  func_0x000107c59594(0x4010000000000000,uVar4);
  func_0x000107c54280(*(undefined8 *)(lVar6 + lVar3));
  lVar13 = _DAT_112f4e3f8;
  func_0x000107c5a050(*(undefined8 *)(lVar7 + _DAT_112f4e3f8));
  lVar8 = lVar7;
  func_0x000107c61174(lVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c();
  func_0x000107c5a050(*(undefined8 *)(lVar6 + lVar3));
  func_0x000107c3d89c(*(undefined8 *)(lVar7 + lVar13));
  uVar9 = *(undefined8 *)(lVar7 + lVar13);
  func_0x000107c4ac04(uVar9);
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  lVar10 = 0x112d360b8;
  FUN_10323faa4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x18) = 0x11;
  *(undefined8 *)(lVar10 + 0x10) = 8;
  uVar11 = *(undefined8 *)(lVar7 + lVar13);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar12 = lVar8;
  func_0x000107c5cbe4(lVar8);
  func_0x000107c61180();
  uVar4 = uVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  *(undefined8 *)(lVar10 + 0x20) = uVar4;
  uVar11 = *(undefined8 *)(lVar7 + lVar13);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar12 = lVar8;
  func_0x000107c4acb0(lVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  uVar4 = uVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  *(undefined8 *)(lVar10 + 0x28) = uVar4;
  uVar11 = *(undefined8 *)(lVar7 + lVar13);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar12 = lVar8;
  func_0x000107c3ec1c(lVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  uVar4 = uVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  *(undefined8 *)(lVar10 + 0x30) = uVar4;
  uVar11 = *(undefined8 *)(lVar7 + lVar13);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar13 = lVar8;
  func_0x000107c5ce8c(lVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  uVar4 = uVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar13);
  *(undefined8 *)(lVar10 + 0x38) = uVar4;
  uVar14 = *(undefined8 *)(lVar6 + lVar3);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar4 = uVar9;
  func_0x000107c5cbe4(uVar9);
  func_0x000107c61180();
  uVar11 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar10 + 0x40) = uVar11;
  uVar14 = *(undefined8 *)(lVar6 + lVar3);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar4 = uVar9;
  func_0x000107c4acb0(uVar9);
  func_0x000107c61180();
  uVar11 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar10 + 0x48) = uVar11;
  uVar14 = *(undefined8 *)(lVar6 + lVar3);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar11 = uVar9;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar4 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  *(undefined8 *)(lVar10 + 0x50) = uVar4;
  uVar14 = *(undefined8 *)(lVar6 + lVar3);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar4 = uVar9;
  func_0x000107c5ce8c(uVar9);
  func_0x000107c61180();
  uVar11 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar10 + 0x58) = uVar11;
  uVar4 = 0;
  FUN_10323fc90(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar6 = lVar10;
  func_0x000107c5fc48(lVar10,uVar4);
  func_0x000107c61574(lVar10);
  func_0x000107c3d048(puVar5);
  func_0x000107c61170(lVar8);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar6);
  return lVar8;
}



/* Entry: 10323e97c; end: 10323f03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323e97c(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long unaff_x20;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  lVar17 = unaff_x20;
  func_0x000107c614f0();
  func_0x000107c3ec60();
  func_0x00010323fd20(param_4,&uStack_f0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_d8 == 0) {
    func_0x00010323fdd8(&uStack_f0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    lStack_98 = lStack_d8;
    uStack_a0 = uStack_e0;
    uStack_90 = uStack_d0;
    uStack_7f = (undefined7)uStack_bf;
    uStack_78 = (undefined1)((ulong)uStack_bf >> 0x38);
    uStack_80 = uStack_c0;
    puVar15 = &uStack_b0;
    lVar11 = lVar17;
    FUN_10324b878(puVar15,lVar17,&PTR_DAT_112f4e468,&PTR_DAT_11062c210);
    if (375.0 <= param_3) {
      func_0x000107c5381c(0x447a0000,puVar15);
      puVar16 = puVar15;
      func_0x000107c5e308(puVar15);
      func_0x000107c61180();
      puVar4 = puVar16;
      func_0x000107c40290(0x404c000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      func_0x000107c521e8(puVar4);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112f4e400));
    FUN_10322b438(&uStack_b0);
    plVar1 = (long *)(unaff_x20 + _DAT_112f4e430);
    lVar5 = *plVar1;
    *plVar1 = (long)puVar15;
    plVar1[1] = lVar11;
    func_0x000107c61170(lVar5);
  }
  func_0x00010323fd20(param_4 + 0x40,&uStack_f0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_d8 == 0) {
    func_0x00010323fdd8(&uStack_f0,0x112f4da60,&UNK_10db9feb0);
    puVar15 = (undefined8 *)0x0;
  }
  else {
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    lStack_98 = lStack_d8;
    uStack_a0 = uStack_e0;
    uStack_90 = uStack_d0;
    uStack_7f = (undefined7)uStack_bf;
    uStack_78 = (undefined1)((ulong)uStack_bf >> 0x38);
    uStack_80 = uStack_c0;
    if (param_3 < 375.0) {
      func_0x00010321d6b8(CONCAT71(uStack_7f,uStack_c0));
      uStack_80 = 1;
      uStack_7f = 0;
    }
    puVar15 = &uStack_b0;
    FUN_10324b878(puVar15,lVar17,&PTR_DAT_112f4e468,&PTR_DAT_11062c210);
    func_0x000107c5381c(0x437a0000);
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112f4e400));
    FUN_10322b438(&uStack_b0);
  }
  func_0x00010323fd20(param_4 + 0x80,&uStack_f0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_d8 == 0) {
    func_0x00010323fdd8(&uStack_f0,0x112f4da60,&UNK_10db9feb0);
    puVar16 = (undefined8 *)0x0;
  }
  else {
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    lStack_98 = lStack_d8;
    uStack_a0 = uStack_e0;
    uStack_90 = uStack_d0;
    uStack_7f = (undefined7)uStack_bf;
    uStack_78 = (undefined1)((ulong)uStack_bf >> 0x38);
    uStack_80 = uStack_c0;
    puVar16 = &uStack_b0;
    FUN_10324b878(puVar16,lVar17,&PTR_DAT_112f4e468,&PTR_DAT_11062c210);
    func_0x000107c5381c(0x437a0000);
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112f4e400));
    FUN_10322b438(&uStack_b0);
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 < 375.0) {
    lVar17 = *(long *)(unaff_x20 + _DAT_112f4e430);
    if (lVar17 == 0) {
      func_0x000107c61170(puVar16);
      puVar16 = puVar15;
    }
    else if (puVar15 != (undefined8 *)0x0) {
      puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar11 = 0x112d360b8;
      FUN_10323faa4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                    &UNK_10d9011a0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar11 + 0x18) = 3;
      *(undefined8 *)(lVar11 + 0x10) = 1;
      func_0x000107c61174(lVar17);
      puVar4 = puVar15;
      func_0x000107c5e308();
      func_0x000107c61180();
      lVar5 = lVar17;
      func_0x000107c5e308(lVar17);
      func_0x000107c61180();
      puVar6 = puVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar5);
      *(undefined8 **)(lVar11 + 0x20) = puVar6;
      uVar7 = 0;
      func_0x00010323fc90(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = lVar11;
      func_0x000107c5fc48(lVar11,uVar7);
      func_0x000107c61574(lVar11);
      func_0x000107c3d048(puVar13);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(lVar17);
    }
    func_0x000107c61170(puVar16);
    return;
  }
  if (puVar15 != (undefined8 *)0x0) {
    puVar4 = puVar15;
    func_0x000107c61174();
    if ((ulong)puVar13 >> 0x3e == 0) {
      puVar8 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar8 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar13) {
        puVar8 = puVar13;
      }
      func_0x000107c60480(puVar8);
    }
    puVar9 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar8 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar14 = (ulong)puVar9 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar14 + 0x10);
    puVar13 = puVar9;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar2) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x0001023b5804(puVar13,uVar2 + 1,1,puVar9);
      uVar14 = (ulong)puVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar2 + 1;
    *(undefined8 **)(uVar14 + uVar2 * 8 + 0x20) = puVar4;
  }
  if (puVar16 != (undefined8 *)0x0) {
    puVar4 = puVar16;
    func_0x000107c61174();
    puVar8 = puVar13;
    func_0x000107c61550();
    if ((((int)puVar8 == 0) || ((long)puVar13 < 0)) ||
       (puVar8 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar13 >> 0x3e == 0) {
        puVar9 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar9 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar13) {
          puVar9 = puVar13;
        }
        func_0x000107c60480(puVar9);
      }
      puVar8 = (undefined *)0x0;
      func_0x0001023b5804(0,puVar9 + 1,1,puVar13);
    }
    uVar14 = (ulong)puVar8 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar14 + 0x10);
    puVar13 = puVar8;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar2) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x0001023b5804(puVar13,uVar2 + 1,1,puVar8);
      uVar14 = (ulong)puVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar2 + 1;
    *(undefined8 **)(uVar14 + uVar2 * 8 + 0x20) = puVar4;
  }
  puVar8 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
  if ((ulong)puVar13 >> 0x3e == 0) {
    puVar9 = *(undefined **)(puVar8 + 0x10);
    if (puVar9 < (undefined *)0x2) goto LAB_10323f004;
  }
  else {
    puVar9 = puVar13;
    if (-1 < (long)puVar13) {
      puVar9 = puVar8;
    }
    puVar12 = puVar9;
    func_0x000107c60480();
    if ((long)puVar12 < 2) goto LAB_10323f004;
    func_0x000107c60480();
    if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10323ef8c);
      (*pcVar3)();
    }
    if (puVar9 == (undefined *)0x1) goto LAB_10323f004;
  }
  uVar2 = (ulong)puVar13 & 0xc000000000000001;
  if ((uVar2 == 0) &&
     ((*(undefined **)(puVar8 + 0x10) < (undefined *)0x2 ||
      (*(undefined **)(puVar8 + 0x10) < puVar9)))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10323efec);
    (*pcVar3)();
  }
  puVar9 = puVar9 + -1;
  lVar17 = 5;
  do {
    if (uVar2 == 0) {
      lVar11 = *(long *)(puVar13 + lVar17 * 8);
      func_0x000107c61174(lVar11);
    }
    else {
      lVar11 = lVar17 + -4;
      func_0x000100f040d0(lVar11,puVar13);
    }
    lVar5 = lVar11;
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (uVar2 == 0) {
      uVar7 = *(undefined8 *)(puVar13 + 0x20);
      func_0x000107c61174(uVar7);
    }
    else {
      uVar7 = 0;
      func_0x000100f040d0(0,puVar13);
    }
    uVar10 = uVar7;
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    lVar11 = lVar5;
    func_0x000107c40280(lVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar10);
    func_0x000107c521e8(lVar11);
    func_0x000107c61170(lVar11);
    lVar17 = lVar17 + 1;
    puVar9 = puVar9 + -1;
  } while (puVar9 != (undefined *)0x0);
LAB_10323f004:
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c6142c(puVar13);
  return;
}



/* Entry: 10323f040; end: 10323f31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323f040(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  code *pcVar7;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_177;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_5f;
  
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112f4e428;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    uStack_240 = 0x654d6e6f69746361;
    uStack_238 = 0xea0000000000756e;
    func_0x0001031e60c4(&uStack_100);
    uStack_1a0 = uStack_88;
    uStack_1a8 = uStack_90;
    uStack_190 = uStack_78;
    uStack_198 = uStack_80;
    uStack_188 = uStack_70;
    uStack_177 = uStack_5f;
    uStack_1e0 = uStack_c8;
    uStack_1e8 = uStack_d0;
    uStack_1d0 = uStack_b8;
    uStack_1d8 = uStack_c0;
    uStack_1c0 = uStack_a8;
    uStack_1c8 = uStack_b0;
    uStack_1b0 = uStack_98;
    uStack_1b8 = uStack_a0;
    uStack_210 = uStack_f8;
    uStack_218 = uStack_100;
    uStack_200 = uStack_e8;
    uStack_208 = uStack_f0;
    uStack_1f0 = uStack_d8;
    uStack_1f8 = uStack_e0;
    puVar3 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174();
    func_0x000107c3f650();
    func_0x000107c61180();
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    uStack_228 = 0xe000000000000000;
    uStack_160 = 3;
    uStack_168 = 0;
    uStack_220 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0x100;
    uStack_138 = 0;
    uStack_130 = 1;
    pcVar7 = *(code **)(lVar6 + 0x10);
    uVar4 = 0x112f4d178;
    puStack_158 = puVar3;
    func_0x0001000285a8(0x112f4d178,&UNK_10db9ed80);
    uVar5 = uVar4;
    FUN_10321a498();
    (*pcVar7)(&stack0xfffffffffffffed8,&uStack_250,uVar4,uVar5,lVar2,lVar6);
    func_0x000107c615e8(lVar1);
    func_0x00010323fdd8(&uStack_250,0x112f4d178,&UNK_10db9ed80);
    func_0x0001000834e4(&stack0xfffffffffffffed8);
  }
  return;
}



/* Entry: 10323f31c; end: 10323f40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323f31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  long lVar5;
  
  func_0x000107c614f0();
  uVar1 = param_5;
  FUN_10324e448(param_5,param_6);
  if ((uVar1 & 1) != 0) {
    lVar3 = unaff_x20 + _DAT_112f4e428;
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar3 + 8);
      lVar3 = lVar2;
      func_0x000107c614f0();
      pcVar4 = *(code **)(lVar5 + 8);
      func_0x000107c61174();
      (*pcVar4)(&stack0xffffffffffffff78,param_1,param_2,param_3,param_4,param_5,param_6,lVar3,lVar5
               );
      func_0x000107c615e8(lVar2);
      func_0x0001000834e4(&stack0xffffffffffffff78);
    }
  }
  return;
}



/* Entry: 10323f410; end: 10323f43b; -[_TtC35SCContextMemoriesActionBarRenderers25MemoriesActionBarRenderer initWithTouchExtension:] */

void FUN_10323f410(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextMemoriesActionBarRenderers.MemoriesActionBarRenderer",0x3d,
                      "init(touchExtension:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10323f43c);
  (*pcVar1)();
}



/* Entry: 10323f43c; end: 10323f517; -[_TtC35SCContextMemoriesActionBarRenderers25MemoriesActionBarRenderer init] */

void FUN_10323f43c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextMemoriesActionBarRenderers.MemoriesActionBarRenderer",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10323f468);
  (*pcVar1)();
}



/* Entry: 10323f518; end: 10323f59f; -[_TtC35SCContextMemoriesActionBarRenderers25MemoriesActionBarRenderer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010323f534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010323f538) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323f518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4e3f8));
  return;
}



/* Entry: 10323f5a0; end: 10323f5bf;  */

void FUN_10323f5a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c2ba0);
  return;
}



/* Entry: 10323f5c0; end: 10323f5d7;  */

undefined ** FUN_10323f5c0(void)

{
  return &PTR_DAT_11062c028;
}



/* Entry: 10323f5d8; end: 10323f61f;  */

void FUN_10323f5d8(void)

{
  FUN_10324d7c8();
  return;
}



/* Entry: 10323f620; end: 10323f65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10323f620(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + _DAT_112f4e438);
}



/* Entry: 10323f660; end: 10323f68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323f660(void)

{
  long unaff_x20;
  
  func_0x000107c61618(unaff_x20 + _DAT_112f4e428);
  return;
}



/* Entry: 10323f690; end: 10323f69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323f690(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_112f4e400));
  return;
}



/* Entry: 10323f6a0; end: 10323f6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10323f6a0(void)

{
  unkuint9 *pVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auStack_38 [24];
  
  pVar1 = (unkuint9 *)(unaff_x20 + _DAT_112f4e418);
  func_0x000107c61428(pVar1,auStack_38,0,0);
  auVar2._9_7_ = 0;
  auVar2._0_9_ = *pVar1;
  return auVar2;
}



/* Entry: 10323f6e8; end: 10323f73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323f6e8(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e418);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  return;
}



/* Entry: 10323f740; end: 10323f77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10323f740(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4e418;
  func_0x000107c61428(unaff_x20 + _DAT_112f4e418,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10323f780;
  return auVar2;
}



/* Entry: 10323f780; end: 10323f783;  */

void FUN_10323f780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10323f784; end: 10323f843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323f784(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4e420;
  func_0x000107c61428(unaff_x20 + _DAT_112f4e420,auStack_48,0,0);
  func_0x00010323fd20(unaff_x20 + lVar1,param_1,0x112f4e540,&UNK_10dba0f50);
  return;
}



/* Entry: 10323f844; end: 10323f8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10323f844(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4e420;
  func_0x000107c61428(unaff_x20 + _DAT_112f4e420,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10323fe18;
  return auVar2;
}



/* Entry: 10323f8a8; end: 10323f8ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323f8a8(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long unaff_x20;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  lVar17 = unaff_x20;
  func_0x000107c614f0();
  func_0x000107c3ec60();
  func_0x00010323fd20(param_4,&uStack_f0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_d8 == 0) {
    func_0x00010323fdd8(&uStack_f0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    lStack_98 = lStack_d8;
    uStack_a0 = uStack_e0;
    uStack_90 = uStack_d0;
    uStack_7f = (undefined7)uStack_bf;
    uStack_78 = (undefined1)((ulong)uStack_bf >> 0x38);
    uStack_80 = uStack_c0;
    puVar15 = &uStack_b0;
    lVar11 = lVar17;
    FUN_10324b878(puVar15,lVar17,&PTR_DAT_112f4e468,&PTR_DAT_11062c210);
    if (375.0 <= param_3) {
      func_0x000107c5381c(0x447a0000,puVar15);
      puVar16 = puVar15;
      func_0x000107c5e308(puVar15);
      func_0x000107c61180();
      puVar4 = puVar16;
      func_0x000107c40290(0x404c000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      func_0x000107c521e8(puVar4);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112f4e400));
    FUN_10322b438(&uStack_b0);
    plVar1 = (long *)(unaff_x20 + _DAT_112f4e430);
    lVar5 = *plVar1;
    *plVar1 = (long)puVar15;
    plVar1[1] = lVar11;
    func_0x000107c61170(lVar5);
  }
  func_0x00010323fd20(param_4 + 0x40,&uStack_f0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_d8 == 0) {
    func_0x00010323fdd8(&uStack_f0,0x112f4da60,&UNK_10db9feb0);
    puVar15 = (undefined8 *)0x0;
  }
  else {
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    lStack_98 = lStack_d8;
    uStack_a0 = uStack_e0;
    uStack_90 = uStack_d0;
    uStack_7f = (undefined7)uStack_bf;
    uStack_78 = (undefined1)((ulong)uStack_bf >> 0x38);
    uStack_80 = uStack_c0;
    if (param_3 < 375.0) {
      func_0x00010321d6b8(CONCAT71(uStack_7f,uStack_c0));
      uStack_80 = 1;
      uStack_7f = 0;
    }
    puVar15 = &uStack_b0;
    FUN_10324b878(puVar15,lVar17,&PTR_DAT_112f4e468,&PTR_DAT_11062c210);
    func_0x000107c5381c(0x437a0000);
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112f4e400));
    FUN_10322b438(&uStack_b0);
  }
  func_0x00010323fd20(param_4 + 0x80,&uStack_f0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_d8 == 0) {
    func_0x00010323fdd8(&uStack_f0,0x112f4da60,&UNK_10db9feb0);
    puVar16 = (undefined8 *)0x0;
  }
  else {
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    lStack_98 = lStack_d8;
    uStack_a0 = uStack_e0;
    uStack_90 = uStack_d0;
    uStack_7f = (undefined7)uStack_bf;
    uStack_78 = (undefined1)((ulong)uStack_bf >> 0x38);
    uStack_80 = uStack_c0;
    puVar16 = &uStack_b0;
    FUN_10324b878(puVar16,lVar17,&PTR_DAT_112f4e468,&PTR_DAT_11062c210);
    func_0x000107c5381c(0x437a0000);
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112f4e400));
    FUN_10322b438(&uStack_b0);
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 < 375.0) {
    lVar17 = *(long *)(unaff_x20 + _DAT_112f4e430);
    if (lVar17 == 0) {
      func_0x000107c61170(puVar16);
      puVar16 = puVar15;
    }
    else if (puVar15 != (undefined8 *)0x0) {
      puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar11 = 0x112d360b8;
      FUN_10323faa4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                    &UNK_10d9011a0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar11 + 0x18) = 3;
      *(undefined8 *)(lVar11 + 0x10) = 1;
      func_0x000107c61174(lVar17);
      puVar4 = puVar15;
      func_0x000107c5e308();
      func_0x000107c61180();
      lVar5 = lVar17;
      func_0x000107c5e308(lVar17);
      func_0x000107c61180();
      puVar6 = puVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar5);
      *(undefined8 **)(lVar11 + 0x20) = puVar6;
      uVar7 = 0;
      func_0x00010323fc90(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = lVar11;
      func_0x000107c5fc48(lVar11,uVar7);
      func_0x000107c61574(lVar11);
      func_0x000107c3d048(puVar13);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(lVar17);
    }
    func_0x000107c61170(puVar16);
    return;
  }
  if (puVar15 != (undefined8 *)0x0) {
    puVar4 = puVar15;
    func_0x000107c61174();
    if ((ulong)puVar13 >> 0x3e == 0) {
      puVar8 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar8 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar13) {
        puVar8 = puVar13;
      }
      func_0x000107c60480(puVar8);
    }
    puVar9 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar8 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar14 = (ulong)puVar9 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar14 + 0x10);
    puVar13 = puVar9;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar2) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x0001023b5804(puVar13,uVar2 + 1,1,puVar9);
      uVar14 = (ulong)puVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar2 + 1;
    *(undefined8 **)(uVar14 + uVar2 * 8 + 0x20) = puVar4;
  }
  if (puVar16 != (undefined8 *)0x0) {
    puVar4 = puVar16;
    func_0x000107c61174();
    puVar8 = puVar13;
    func_0x000107c61550();
    if ((((int)puVar8 == 0) || ((long)puVar13 < 0)) ||
       (puVar8 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar13 >> 0x3e == 0) {
        puVar9 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar9 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar13) {
          puVar9 = puVar13;
        }
        func_0x000107c60480(puVar9);
      }
      puVar8 = (undefined *)0x0;
      func_0x0001023b5804(0,puVar9 + 1,1,puVar13);
    }
    uVar14 = (ulong)puVar8 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar14 + 0x10);
    puVar13 = puVar8;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar2) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x0001023b5804(puVar13,uVar2 + 1,1,puVar8);
      uVar14 = (ulong)puVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar2 + 1;
    *(undefined8 **)(uVar14 + uVar2 * 8 + 0x20) = puVar4;
  }
  puVar8 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
  if ((ulong)puVar13 >> 0x3e == 0) {
    puVar9 = *(undefined **)(puVar8 + 0x10);
    if (puVar9 < (undefined *)0x2) goto LAB_10323f004;
  }
  else {
    puVar9 = puVar13;
    if (-1 < (long)puVar13) {
      puVar9 = puVar8;
    }
    puVar12 = puVar9;
    func_0x000107c60480();
    if ((long)puVar12 < 2) goto LAB_10323f004;
    func_0x000107c60480();
    if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10323ef8c);
      (*pcVar3)();
    }
    if (puVar9 == (undefined *)0x1) goto LAB_10323f004;
  }
  uVar2 = (ulong)puVar13 & 0xc000000000000001;
  if ((uVar2 == 0) &&
     ((*(undefined **)(puVar8 + 0x10) < (undefined *)0x2 ||
      (*(undefined **)(puVar8 + 0x10) < puVar9)))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10323efec);
    (*pcVar3)();
  }
  puVar9 = puVar9 + -1;
  lVar17 = 5;
  do {
    if (uVar2 == 0) {
      lVar11 = *(long *)(puVar13 + lVar17 * 8);
      func_0x000107c61174(lVar11);
    }
    else {
      lVar11 = lVar17 + -4;
      func_0x000100f040d0(lVar11,puVar13);
    }
    lVar5 = lVar11;
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (uVar2 == 0) {
      uVar7 = *(undefined8 *)(puVar13 + 0x20);
      func_0x000107c61174(uVar7);
    }
    else {
      uVar7 = 0;
      func_0x000100f040d0(0,puVar13);
    }
    uVar10 = uVar7;
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    lVar11 = lVar5;
    func_0x000107c40280(lVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar10);
    func_0x000107c521e8(lVar11);
    func_0x000107c61170(lVar11);
    lVar17 = lVar17 + 1;
    puVar9 = puVar9 + -1;
  } while (puVar9 != (undefined *)0x0);
LAB_10323f004:
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c6142c(puVar13);
  return;
}



/* Entry: 10323f8ac; end: 10323f92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323f8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f4e430);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f4e430))[1];
  uVar4 = uVar1;
  func_0x000107c61174(uVar1);
  FUN_10324d63c(uVar1,uVar2,param_1,lVar3,param_3,&PTR_DAT_11062c210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10323f930; end: 10323f937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323f930(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  code *pcVar7;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_177;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_5f;
  
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112f4e428;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    uStack_240 = 0x654d6e6f69746361;
    uStack_238 = 0xea0000000000756e;
    func_0x0001031e60c4(&uStack_100);
    uStack_1a0 = uStack_88;
    uStack_1a8 = uStack_90;
    uStack_190 = uStack_78;
    uStack_198 = uStack_80;
    uStack_188 = uStack_70;
    uStack_177 = uStack_5f;
    uStack_1e0 = uStack_c8;
    uStack_1e8 = uStack_d0;
    uStack_1d0 = uStack_b8;
    uStack_1d8 = uStack_c0;
    uStack_1c0 = uStack_a8;
    uStack_1c8 = uStack_b0;
    uStack_1b0 = uStack_98;
    uStack_1b8 = uStack_a0;
    uStack_210 = uStack_f8;
    uStack_218 = uStack_100;
    uStack_200 = uStack_e8;
    uStack_208 = uStack_f0;
    uStack_1f0 = uStack_d8;
    uStack_1f8 = uStack_e0;
    puVar3 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174();
    func_0x000107c3f650();
    func_0x000107c61180();
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    uStack_228 = 0xe000000000000000;
    uStack_160 = 3;
    uStack_168 = 0;
    uStack_220 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0x100;
    uStack_138 = 0;
    uStack_130 = 1;
    pcVar7 = *(code **)(lVar6 + 0x10);
    uVar4 = 0x112f4d178;
    puStack_158 = puVar3;
    func_0x0001000285a8(0x112f4d178,&UNK_10db9ed80);
    uVar5 = uVar4;
    FUN_10321a498();
    (*pcVar7)(&stack0xfffffffffffffed8,&uStack_250,uVar4,uVar5,lVar2,lVar6);
    func_0x000107c615e8(lVar1);
    func_0x00010323fdd8(&uStack_250,0x112f4d178,&UNK_10db9ed80);
    func_0x0001000834e4(&stack0xfffffffffffffed8);
  }
  return;
}



/* Entry: 10323f938; end: 10323f97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10323f938(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,ulong param_7)

{
  bool bVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 unaff_x20;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  undefined **ppuVar22;
  ulong uVar23;
  undefined2 uVar24;
  ushort uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined1 auVar29 [16];
  undefined *puStack_830;
  ulong uStack_828;
  long lStack_820;
  code *pcStack_818;
  long lStack_810;
  undefined **ppuStack_808;
  ulong uStack_800;
  undefined8 uStack_7f8;
  undefined1 auStack_7e8 [24];
  undefined8 uStack_7d0;
  ulong uStack_7c8;
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [208];
  ulong uStack_6d8;
  undefined1 auStack_6d0 [208];
  ulong uStack_600;
  undefined1 auStack_5f8 [208];
  ulong uStack_528;
  undefined1 auStack_520 [24];
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  double dStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  double dStack_4a8;
  undefined8 uStack_4a0;
  double dStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_467;
  undefined1 auStack_448 [24];
  undefined8 uStack_430;
  ulong uStack_428;
  undefined *puStack_378;
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  ulong uStack_350;
  ulong uStack_2a0;
  undefined *puStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  double dStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  double dStack_230;
  undefined8 uStack_228;
  double dStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1ef;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double dStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_13f;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_8f;
  
  uVar28 = (undefined2)((ulong)param_1 >> 0x30);
  uVar27 = (undefined2)((ulong)param_1 >> 0x20);
  uVar26 = (undefined2)((ulong)param_1 >> 0x10);
  uVar24 = (undefined2)param_1;
  func_0x000107c614f0();
  ppuStack_808 = &PTR_DAT_11062c210;
  uVar8 = *(undefined8 *)(param_5 + 0x18);
  lVar6 = *(long *)(param_5 + 0x20);
  uStack_800 = param_7;
  uStack_7f8 = unaff_x20;
  func_0x0001000a8868(param_5,uVar8);
  lVar5 = 0;
  func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
  lVar19 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar23 = (long)&puStack_830 - extraout_x8;
  (**(code **)(lVar6 + 0x28))(uVar23,uVar8,lVar6);
  func_0x000107c614b4(lVar6,uVar8,lVar5,&UNK_10e804840,&UNK_10e804850);
  lVar7 = lVar6;
  func_0x00010322b060();
  uVar17 = uVar23;
  FUN_10322b46c(uVar23,lVar5,&UNK_11076af50,lVar6,lVar7);
  lStack_810 = param_5;
  if ((uVar17 & 1) == 0) {
    (**(code **)(lVar19 + 8))(uVar23,lVar5);
LAB_10324ba3c:
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    lVar5 = 0;
    func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
    lVar19 = *(long *)(lVar5 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar21 = uVar23 - extraout_x8_00;
    (**(code **)(lVar6 + 0x28))(uVar21,uVar8,lVar6);
    func_0x000107c614b4(lVar6,uVar8,lVar5,&UNK_10e804840,&UNK_10e804850);
    lVar7 = lVar6;
    func_0x00010322b260();
    uVar17 = uVar21;
    FUN_10322b46c(uVar21,lVar5,&UNK_11076b850,lVar6,lVar7);
    if ((uVar17 & 1) == 0) {
      (**(code **)(lVar19 + 8))(uVar21,lVar5);
    }
    else {
      uVar8 = *(undefined8 *)(param_5 + 0x18);
      lVar6 = *(long *)(param_5 + 0x20);
      func_0x0001000a8868(param_5,uVar8);
      (**(code **)(lVar6 + 0x30))(auStack_5f8,uVar8,lVar6);
      FUN_103202330(uStack_528);
      func_0x00010322ed34(auStack_5f8);
      uVar17 = uStack_528;
      func_0x0001044109f4(uStack_528,3);
      func_0x00010321d6b8(uStack_528);
      (**(code **)(lVar19 + 8))(uVar21,lVar5);
      if ((uVar17 & 1) != 0) goto LAB_10324bb68;
    }
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    lVar5 = 0;
    func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
    lVar19 = *(long *)(lVar5 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar21 = uVar23 - extraout_x8_01;
    (**(code **)(lVar6 + 0x28))(uVar21,uVar8,lVar6);
    func_0x000107c614b4(lVar6,uVar8,lVar5,&UNK_10e804840,&UNK_10e804850);
    lVar7 = lVar6;
    func_0x00010322b1a0();
    uVar17 = uVar21;
    FUN_10322b46c(uVar21,lVar5,&UNK_11076afd0,lVar6,lVar7);
    (**(code **)(lVar19 + 8))(uVar21,lVar5);
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    if ((uVar17 & 1) == 0) {
      puVar10 = (undefined1 *)0x0;
      func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
      lVar5 = *(long *)(puVar10 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      uVar23 = uVar23 - extraout_x8_02;
      (**(code **)(lVar6 + 0x28))(uVar23,uVar8,lVar6);
      func_0x000107c614b4(lVar6,uVar8,puVar10,&UNK_10e804840,&UNK_10e804850);
      lVar7 = lVar6;
      FUN_1032013d4();
      uVar17 = uVar23;
      FUN_10322b46c(uVar23,puVar10,&UNK_11076bad0,lVar6,lVar7);
      (**(code **)(lVar5 + 8))(uVar23);
      if ((uVar17 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_5 + 0x18);
        lVar6 = *(long *)(param_5 + 0x20);
        func_0x0001000a8868(param_5,uVar8);
        (**(code **)(lVar6 + 0x30))(auStack_520,uVar8,lVar6);
        uStack_218 = uStack_490;
        dStack_220 = dStack_498;
        uStack_208 = uStack_480;
        uStack_210 = uStack_488;
        uStack_200 = uStack_478;
        uStack_1ef = uStack_467;
        uStack_248 = uStack_4c0;
        uStack_250 = uStack_4c8;
        uStack_238 = uStack_4b0;
        uStack_240 = uStack_4b8;
        uStack_228 = uStack_4a0;
        dStack_230 = dStack_4a8;
        uStack_288 = uStack_500;
        uStack_290 = uStack_508;
        uStack_278 = uStack_4f0;
        uStack_280 = uStack_4f8;
        uStack_268 = uStack_4e0;
        dStack_270 = dStack_4e8;
        uStack_258 = uStack_4d0;
        uStack_260 = uStack_4d8;
        puVar10 = auStack_370;
        FUN_10324e138(&uStack_290,puVar10,0x112f4d5c8,&UNK_10db9f700);
        func_0x00010322ed34(auStack_520);
        uStack_168 = uStack_218;
        dStack_170 = dStack_220;
        uStack_158 = uStack_208;
        uStack_160 = uStack_210;
        uStack_150 = uStack_200;
        uStack_13f = uStack_1ef;
        uStack_198 = uStack_248;
        uStack_1a0 = uStack_250;
        uStack_188 = uStack_238;
        uStack_190 = uStack_240;
        uStack_178 = uStack_228;
        dStack_180 = dStack_230;
        uStack_1d8 = uStack_288;
        uStack_1e0 = uStack_290;
        uStack_1c8 = uStack_278;
        uStack_1d0 = uStack_280;
        uStack_1b8 = uStack_268;
        dStack_1c0 = dStack_270;
        uStack_1a8 = uStack_258;
        uStack_1b0 = uStack_260;
        iVar4 = (int)&uStack_1e0;
        FUN_103233944();
        if (iVar4 != 1) {
          uStack_b8 = uStack_168;
          dStack_c0 = dStack_170;
          uStack_a8 = uStack_158;
          uStack_b0 = uStack_160;
          uStack_a0 = uStack_150;
          uStack_8f = uStack_13f;
          uStack_e8 = uStack_198;
          uStack_f0 = uStack_1a0;
          uStack_d8 = uStack_188;
          uStack_e0 = uStack_190;
          uStack_c8 = uStack_178;
          dStack_d0 = dStack_180;
          uStack_128 = uStack_1d8;
          uStack_130 = uStack_1e0;
          uStack_118 = uStack_1c8;
          uStack_120 = uStack_1d0;
          uVar24 = (undefined2)uStack_1b0;
          uVar26 = (undefined2)((ulong)uStack_1b0 >> 0x10);
          uVar27 = (undefined2)((ulong)uStack_1b0 >> 0x20);
          uVar28 = (undefined2)((ulong)uStack_1b0 >> 0x30);
          uStack_108 = uStack_1b8;
          dStack_110 = dStack_1c0;
          uStack_f8 = uStack_1a8;
          uStack_100 = uStack_1b0;
          iVar4 = (int)&uStack_130;
          param_2 = dStack_1c0;
          param_3 = dStack_170;
          param_4 = dStack_180;
          FUN_103238538();
          puVar11 = &uStack_130;
          func_0x000100d3e680();
          if (iVar4 == 2) {
            uVar17 = *puVar11;
            puVar10 = (undefined1 *)0x0;
            FUN_1032584ac();
            func_0x000107c610f8();
            func_0x000107c453e4();
            if (uVar17 >> 0x3e == 0) {
              uStack_828 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar23 = uVar17 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar17) {
                uVar23 = uVar17;
              }
              func_0x000107c60480();
              uStack_828 = uVar23;
            }
            uVar17 = uStack_800;
            func_0x00010324e180(&uStack_290,0x112f4d5c8,&UNK_10db9f700);
            uVar8 = *(undefined8 *)(param_5 + 0x18);
            lVar6 = *(long *)(param_5 + 0x20);
            func_0x0001000a8868(param_5,uVar8);
            (**(code **)(lVar6 + 0x30))(auStack_448,uVar8,lVar6);
            puStack_298 = puStack_378;
            FUN_1032436a4(&puStack_298,auStack_370);
            func_0x00010322ed34(auStack_448);
            puVar12 = puStack_298;
            if (puStack_298 < (undefined *)0xb) {
              FUN_10322b8e8(&puStack_298);
              puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            uVar23 = uStack_828;
            if ((long)uStack_828 < 0) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x10324c6e0);
              (*pcVar20)();
            }
            if (uStack_828 == 0) {
              func_0x000107c6142c();
              ppuVar22 = &PTR_DAT_11062c160;
              uVar8 = uStack_7f8;
            }
            else {
              uStack_800 = *(ulong *)(puVar12 + 0x10);
              pcStack_818 = *(code **)(uVar17 + 0x38);
              lStack_820 = _DAT_112f4eec0;
              puStack_830 = puVar12;
              func_0x000107c61428(puVar10 + _DAT_112f4eec0,auStack_7c0,0,0);
              uVar21 = 0;
              do {
                if (uVar21 < uStack_800) {
                  if (*(ulong *)(puStack_830 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
                    pcVar20 = (code *)SoftwareBreakpoint(1,0x10324c6c4);
                    (*pcVar20)();
                  }
                  uVar18 = *(ulong *)(puStack_830 + uVar21 * 8 + 0x20);
                  FUN_103202330(uVar18);
                }
                else {
                  uVar8 = *(undefined8 *)(param_5 + 0x18);
                  lVar6 = *(long *)(param_5 + 0x20);
                  func_0x0001000a8868(param_5,uVar8);
                  uVar23 = uStack_828;
                  (**(code **)(lVar6 + 0x30))(auStack_370,uVar8,lVar6);
                  uVar18 = uStack_2a0;
                  FUN_103202330(uStack_2a0);
                  func_0x00010322ed34(auStack_370);
                }
                uVar21 = uVar21 + 1;
                uVar13 = uVar18;
                FUN_10324e47c(uVar18);
                func_0x00010321d6b8(uVar18);
                uVar8 = uStack_7f8;
                uVar9 = 0;
                func_0x000107c614b8(0,uVar17,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
                uVar18 = uVar17;
                uStack_7d0 = uVar9;
                func_0x000107c614b4(uVar17,uVar8,uVar9,&UNK_10e75223c,&UNK_10e75224c);
                puVar15 = auStack_7e8;
                uStack_7c8 = uVar18;
                func_0x0001000c5db4(puVar15);
                (*pcStack_818)(puVar15,uVar8,uVar17);
                func_0x000103254b00(0);
                func_0x000107c610f8();
                param_2 = 0.0;
                param_3 = 0.0;
                param_4 = 0.0;
                uVar8 = 3;
                FUN_1032516ac(0,3,uVar13,0,auStack_7e8,0,0);
                func_0x000107c5a050();
                uVar24 = 0;
                FUN_103253cf0(0,1);
                uVar26 = 0x437a;
                uVar27 = 0;
                uVar28 = 0;
                func_0x000103253e20(1);
                func_0x000107c3d5b4(*(undefined8 *)(puVar10 + lStack_820));
                func_0x000107c61170(uVar8);
              } while (uVar23 != uVar21);
              func_0x000107c6142c(puStack_830);
              ppuVar22 = &PTR_DAT_11062c160;
              uVar8 = uStack_7f8;
            }
            goto LAB_10324c464;
          }
          puVar10 = (undefined1 *)0x112f4d5c8;
          func_0x00010324e180(&uStack_290,0x112f4d5c8,&UNK_10db9f700);
        }
      }
      FUN_10324e4e0();
      if (puVar10 == (undefined1 *)0x0) {
        uVar8 = *(undefined8 *)(param_5 + 0x30);
        FUN_10324e47c(uVar8);
      }
      else {
        func_0x000107c6142c(puVar10);
        uVar8 = 4;
      }
      uVar17 = uStack_800;
      puVar10 = *(undefined1 **)(param_5 + 0x18);
      uVar9 = *(undefined8 *)(param_5 + 0x20);
      lVar6 = param_5;
      func_0x0001000a8868(param_5,puVar10);
      FUN_10324e314(puVar10,uVar9,lVar6);
      uVar9 = uStack_7f8;
      uVar2 = *(undefined1 *)(param_5 + 0x29);
      pcVar20 = *(code **)(uVar17 + 0x38);
      uVar14 = 0;
      func_0x000107c614b8(0,uVar17,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
      uVar23 = uVar17;
      uStack_358 = uVar14;
      func_0x000107c614b4(uVar17,uVar9,uVar14,&UNK_10e75223c,&UNK_10e75224c);
      puVar15 = auStack_370;
      uStack_350 = uVar23;
      func_0x0001000c5db4(puVar15);
      (*pcVar20)(puVar15,uVar9,uVar17);
      func_0x000103254b00(0);
      func_0x000107c610f8();
      uVar24 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      param_2 = 0.0;
      param_3 = 0.0;
      param_4 = 0.0;
      FUN_1032516ac(puVar10,uVar8,uVar2,auStack_370,0,0);
      uVar23 = *(ulong *)(param_5 + 0x30);
      func_0x0001044109f4(uVar23,3);
      if ((uVar23 & 1) != 0) {
        func_0x000107c59c74(*(undefined8 *)(puVar10 + _DAT_112f4ecc0));
      }
      ppuVar22 = &PTR_DAT_11062bac0;
      uVar8 = uStack_7f8;
    }
    else {
      (**(code **)(lVar6 + 0x30))(auStack_370,uVar8,lVar6);
      FUN_103202330(uStack_2a0);
      func_0x00010322ed34(auStack_370);
      uVar23 = uStack_2a0;
      func_0x0001044109f4(uStack_2a0,1);
      func_0x00010321d6b8(uStack_2a0);
      puVar10 = *(undefined1 **)(param_5 + 0x18);
      uVar8 = *(undefined8 *)(param_5 + 0x20);
      lVar6 = param_5;
      func_0x0001000a8868(param_5,puVar10);
      FUN_10324e314(puVar10,uVar8,lVar6);
      uVar17 = uStack_800;
      uVar2 = *(undefined1 *)(param_5 + 0x29);
      uVar8 = 0;
      func_0x000107c614b8(0,uStack_800,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
      uVar21 = uVar17;
      func_0x000107c614b4(uVar17,uStack_7f8,uVar8,&UNK_10e75223c,&UNK_10e75224c);
      bVar1 = (uVar23 & 1) == 0;
      uStack_430 = uVar8;
      uStack_428 = uVar21;
      if (bVar1) {
        pcVar20 = *(code **)(uVar17 + 0x38);
        puVar15 = auStack_448;
        func_0x0001000c5db4(puVar15);
        (*pcVar20)(puVar15,uStack_7f8,uVar17);
        func_0x000103254b00(0);
        func_0x000107c610f8();
      }
      else {
        pcVar20 = *(code **)(uVar17 + 0x38);
        puVar15 = auStack_448;
        func_0x0001000c5db4(puVar15);
        (*pcVar20)(puVar15,uStack_7f8,uVar17);
        func_0x000103254b00(0);
        func_0x000107c610f8();
      }
      param_4 = 0.0;
      param_3 = 0.0;
      param_2 = 0.0;
      uVar28 = 0;
      uVar27 = 0;
      uVar26 = 0;
      uVar24 = 0;
      FUN_1032516ac(puVar10,!bVar1,uVar2,auStack_448,0,0);
      ppuVar22 = &PTR_DAT_11062bac0;
      uVar8 = uStack_7f8;
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    (**(code **)(lVar6 + 0x30))(auStack_7a8,uVar8,lVar6);
    FUN_103202330(uStack_6d8);
    func_0x00010322ed34(auStack_7a8);
    uVar17 = uStack_6d8;
    func_0x0001044109f4(uStack_6d8,1);
    func_0x00010321d6b8(uStack_6d8);
    (**(code **)(lVar19 + 8))(uVar23,lVar5);
    if ((uVar17 & 1) != 0) goto LAB_10324ba3c;
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    (**(code **)(lVar6 + 0x30))(auStack_6d0,uVar8,lVar6);
    FUN_103202330(uStack_600);
    func_0x00010322ed34(auStack_6d0);
    uVar17 = uStack_600;
    func_0x0001044109f4(uStack_600,0);
    func_0x00010321d6b8(uStack_600);
    if ((uVar17 & 1) != 0) goto LAB_10324ba3c;
LAB_10324bb68:
    uVar17 = uStack_800;
    pcVar20 = *(code **)(uStack_800 + 0x38);
    uVar8 = 0;
    func_0x000107c614b8(0,uStack_800,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
    uVar23 = uVar17;
    uStack_358 = uVar8;
    func_0x000107c614b4(uVar17,uStack_7f8,uVar8,&UNK_10e75223c,&UNK_10e75224c);
    puVar10 = auStack_370;
    uStack_350 = uVar23;
    func_0x0001000c5db4(puVar10);
    (*pcVar20)(puVar10,uStack_7f8,uVar17);
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    uVar9 = *(undefined8 *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    FUN_10324e314(uVar8,uVar9,param_5);
    uVar9 = 0;
    FUN_103256bf4(0);
    func_0x000107c610f8();
    puVar10 = auStack_370;
    FUN_1032559a8(puVar10,uVar8,uVar9);
    ppuVar22 = &PTR_DAT_11062bf78;
    uVar8 = uStack_7f8;
  }
LAB_10324c464:
  ppuVar3 = ppuStack_808;
  pcVar20 = (code *)ppuStack_808[1];
  (*pcVar20)(uVar8,ppuStack_808);
  uVar25 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                        *(double *)
                                         (PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18)),
                               CONCAT24(-(ushort)(param_3 ==
                                                 *(double *)
                                                  (PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10
                                                  )),
                                        CONCAT22(-(ushort)(param_2 ==
                                                          *(double *)
                                                           (
                                                  PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8)),
                                                 -(ushort)((double)CONCAT26(uVar28,CONCAT24(uVar27,
                                                  CONCAT22(uVar26,uVar24))) ==
                                                  *(double *)
                                                   PTR__NSDirectionalEdgeInsetsZero_1103457d8)))),2)
  ;
  if ((uVar25 & 1) == 0) {
    puVar15 = puVar10;
    func_0x000107c614f0(puVar10);
    (*pcVar20)(uVar8,ppuVar3);
    (**(code **)(ppuVar22[1] + 0x10))(puVar15);
  }
  uVar9 = uVar8;
  uVar23 = uVar17;
  (**(code **)(uVar17 + 0x40))(uVar8);
  if (((uint)uVar23 & 0xff) != 1) {
    func_0x000107c614f0(puVar10);
    (*(code *)ppuVar22[7])((short)uVar9);
  }
  (**(code **)(uVar17 + 0xb8))(puVar10,ppuVar22,lStack_810,uVar8,uVar17);
  func_0x000107c5a050(puVar10);
  pcVar20 = *(code **)(uVar17 + 0x50);
  uVar9 = uVar8;
  (*pcVar20)(uVar8,uVar17);
  func_0x000107c3d89c();
  func_0x000107c61170(uVar9);
  puVar15 = puVar10;
  func_0x000107c5cbe4(puVar10);
  func_0x000107c61180();
  uVar9 = uVar8;
  (*pcVar20)(uVar8,uVar17);
  uVar14 = uVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  puVar16 = puVar15;
  func_0x000107c40280(puVar15);
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c521e8(puVar16);
  func_0x000107c61170(puVar16);
  puVar15 = puVar10;
  func_0x000107c3ec1c(puVar10);
  func_0x000107c61180();
  (*pcVar20)(uVar8,uVar17);
  uVar9 = uVar8;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  puVar16 = puVar15;
  func_0x000107c40280(puVar15);
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c521e8(puVar16);
  func_0x000107c61170(puVar16);
  auVar29._8_8_ = ppuVar22;
  auVar29._0_8_ = puVar10;
  return auVar29;
}



/* Entry: 10323f97c; end: 10323fa33;  */

/* WARNING: Possible PIC construction at 0x00010324c894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324c8fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324cb18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ccb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010324ce0c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce88) */
/* WARNING: Removing unreachable block (ram,0x00010324ccb8) */
/* WARNING: Removing unreachable block (ram,0x00010324cb1c) */
/* WARNING: Removing unreachable block (ram,0x00010324c900) */
/* WARNING: Removing unreachable block (ram,0x00010324c9d0) */
/* WARNING: Removing unreachable block (ram,0x00010324c9a0) */
/* WARNING: Removing unreachable block (ram,0x00010324c9d4) */
/* WARNING: Removing unreachable block (ram,0x00010324cb24) */
/* WARNING: Removing unreachable block (ram,0x00010324cc28) */
/* WARNING: Removing unreachable block (ram,0x00010324ce8c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce90) */
/* WARNING: Removing unreachable block (ram,0x00010324cb3c) */
/* WARNING: Removing unreachable block (ram,0x00010324cc30) */
/* WARNING: Removing unreachable block (ram,0x00010324cc04) */
/* WARNING: Removing unreachable block (ram,0x00010324cc34) */
/* WARNING: Removing unreachable block (ram,0x00010324ccdc) */
/* WARNING: Removing unreachable block (ram,0x00010324ce1c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce24) */
/* WARNING: Removing unreachable block (ram,0x00010324ccec) */
/* WARNING: Removing unreachable block (ram,0x00010324cda8) */
/* WARNING: Removing unreachable block (ram,0x00010324cd98) */
/* WARNING: Removing unreachable block (ram,0x00010324cdf8) */
/* WARNING: Removing unreachable block (ram,0x00010324cc4c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce80) */
/* WARNING: Removing unreachable block (ram,0x00010324cca8) */
/* WARNING: Removing unreachable block (ram,0x00010324ca98) */
/* WARNING: Removing unreachable block (ram,0x00010324c898) */
/* WARNING: Removing unreachable block (ram,0x00010324ce70) */
/* WARNING: Removing unreachable block (ram,0x00010324ce84) */

void FUN_10323f97c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar5;
  undefined1 auStack_4c0 [8];
  undefined **ppuStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_488;
  undefined1 auStack_480 [24];
  undefined8 uStack_468;
  long lStack_460;
  
  func_0x000107c614f0();
  uVar1 = 0;
  FUN_1032584ac(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 == 0) {
    ppuStack_4b8 = &PTR_DAT_11062c210;
    uStack_4a8 = param_2;
    uStack_4a0 = param_5;
    uStack_488 = param_3;
    FUN_1031ddb84(param_3,auStack_480);
    lVar2 = param_1;
    func_0x000107c614f0();
    lStack_4b0 = lVar2;
    func_0x0001000a8868(auStack_480,uStack_468);
    lVar3 = 0;
    func_0x000107c614b8(0,lStack_460,uStack_468,&UNK_10e804840,&UNK_10e804858);
    lVar5 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lStack_460 + 0x28))(auStack_4c0 + -extraout_x8,uStack_468,lStack_460);
    func_0x000107c614b4(lStack_460,uStack_468,lVar3,&UNK_10e804840,&UNK_10e804850);
    lVar2 = lVar3;
    lVar4 = lStack_460;
    (**(code **)(lStack_460 + 0x18))(lVar3,lStack_460);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    (**(code **)(lVar5 + 8))(auStack_4c0 + -extraout_x8,lVar3);
    func_0x000107c520f4(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x00010324ceb8(lVar2,param_3,unaff_x20,param_5,&PTR_DAT_11062c210);
    lVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10323fa34; end: 10323fa3b;  */

uint FUN_10323fa34(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar5);
  (**(code **)(lVar6 + 0x48))(uVar5);
  func_0x0001031e1b60();
  if (lVar6 - 1U < 3) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar5);
    pcVar7 = *(code **)(lVar6 + 0x28);
    uVar2 = 0;
    func_0x000107c614b8(0,lVar6,uVar5,&UNK_10e804840,&UNK_10e804858);
    lVar3 = lVar6;
    uStack_50 = uVar2;
    func_0x000107c614b4(lVar6,uVar5,uVar2,&UNK_10e804840,&UNK_10e804850);
    puVar4 = auStack_68;
    lStack_48 = lVar3;
    func_0x0001000c5db4(puVar4);
    (*pcVar7)(puVar4,uVar5,lVar6);
    uVar5 = 0x112f4daa8;
    func_0x0001000285a8(0x112f4daa8,&UNK_10dba00e0);
    puVar4 = auStack_78;
    func_0x000107c6147c(puVar4,auStack_68,uVar5,&UNK_11076b650,6);
    if ((int)puVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,uVar5);
      (**(code **)(lVar6 + 0x48))(uVar5,lVar6);
      uVar2 = uVar5;
      func_0x00010441542c();
      func_0x0001031e1b60(uVar5,lVar6);
      uVar1 = (uint)uVar2 & 1;
    }
    else {
      func_0x000107c6142c(uStack_70);
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 10323fa3c; end: 10323faa3;  */

/* WARNING: Possible PIC construction at 0x00010323fa6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010323fa70) */
/* WARNING: Removing unreachable block (ram,0x00010323fa74) */

void FUN_10323fa3c(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112f4e548;
    plVar5 = (long *)&UNK_10dba0f58;
  }
  else {
    puVar3 = (ulong *)0x112f4e550;
    plVar5 = (long *)&UNK_10dba0f60;
    unaff_x30 = 0x10323fa70;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 10323faa4; end: 10323fb1b;  */

void FUN_10323faa4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10323fc90(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10323fb1c; end: 10323fc8f;  */

uint FUN_10323fb1c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar5);
  (**(code **)(lVar6 + 0x48))(uVar5);
  func_0x0001031e1b60();
  if (lVar6 - 1U < 3) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar5);
    pcVar7 = *(code **)(lVar6 + 0x28);
    uVar2 = 0;
    func_0x000107c614b8(0,lVar6,uVar5,&UNK_10e804840,&UNK_10e804858);
    lVar3 = lVar6;
    uStack_50 = uVar2;
    func_0x000107c614b4(lVar6,uVar5,uVar2,&UNK_10e804840,&UNK_10e804850);
    puVar4 = auStack_68;
    lStack_48 = lVar3;
    func_0x0001000c5db4(puVar4);
    (*pcVar7)(puVar4,uVar5,lVar6);
    uVar5 = 0x112f4daa8;
    func_0x0001000285a8(0x112f4daa8,&UNK_10dba00e0);
    puVar4 = auStack_78;
    func_0x000107c6147c(puVar4,auStack_68,uVar5,&UNK_11076b650,6);
    if ((int)puVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,uVar5);
      (**(code **)(lVar6 + 0x48))(uVar5,lVar6);
      uVar2 = uVar5;
      func_0x00010441542c();
      func_0x0001031e1b60(uVar5,lVar6);
      uVar1 = (uint)uVar2 & 1;
    }
    else {
      func_0x000107c6142c(uStack_70);
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}


