/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103260dc0; end: 103260e03;  */

void FUN_103260dc0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103260e04; end: 103260e07;  */

void FUN_103260e04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f2b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2678;
  func_0x000107c61520(&UNK_10dba2678,&UNK_11062c950);
  puRam0000000112f4f2b8 = puVar1;
  return;
}



/* Entry: 103260e08; end: 103260e47;  */

void FUN_103260e08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f2b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2678;
  func_0x000107c61520(&UNK_10dba2678,&UNK_11062c950);
  puRam0000000112f4f2b8 = puVar1;
  return;
}



/* Entry: 103260e48; end: 103260e4b;  */

void FUN_103260e48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2630;
  func_0x000107c61520(&UNK_10dba2630,&UNK_11062c950);
  puRam0000000112f4f2c0 = puVar1;
  return;
}



/* Entry: 103260e4c; end: 103260e8b;  */

void FUN_103260e4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2630;
  func_0x000107c61520(&UNK_10dba2630,&UNK_11062c950);
  puRam0000000112f4f2c0 = puVar1;
  return;
}



/* Entry: 103260e8c; end: 103260fff;  */

int FUN_103260e8c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 9) {
      iVar2 = 4;
    }
    if (param_2 + 9 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103260f08;
        goto LAB_103260eec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103260eec:
      return ((uint)*param_1 | uVar1 << 8) - 9;
    }
  }
LAB_103260f08:
  iVar2 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103261000; end: 10326101f;  */

void FUN_103261000(void)

{
  func_0x000107c61168(&PTR_PTR_112f4f330);
  return;
}



/* Entry: 103261020; end: 10326103f;  */

bool FUN_103261020(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103261040; end: 1032610d7;  */

void FUN_103261040(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4f390,&UNK_10dba27b0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1032610d8,param_1);
  return;
}



/* Entry: 1032610d8; end: 1032610df;  */

void FUN_1032610d8(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1032611dc();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1032610e0; end: 10326110f;  */

void FUN_1032610e0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103261110; end: 1032611a7;  */

undefined8
FUN_103261110(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_57 = param_4;
  uStack_56 = param_5;
  uStack_50 = param_1;
  uStack_48 = param_6;
  func_0x00010008a7c8(&uStack_38,&uStack_60);
  func_0x000100083b20(&uStack_60);
  func_0x000107c61574(uStack_38);
  uVar1 = CONCAT71(uStack_47,uStack_48);
  func_0x0001000a8868(&uStack_60,uVar1);
  (**(code **)(lStack_40 + 8))(uVar1,lStack_40);
  func_0x0001000834e4(&uStack_60);
  return uVar1;
}



/* Entry: 1032611a8; end: 1032611cb;  */

void FUN_1032611a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032611cc; end: 1032611db;  */

undefined1  [16] FUN_1032611cc(void)

{
  return ZEXT816(0x11062cc40);
}



/* Entry: 1032611dc; end: 1032611fb;  */

void FUN_1032611dc(void)

{
  func_0x000107c61168(&PTR_PTR_112f4f3d8);
  return;
}



/* Entry: 1032611fc; end: 103261227;  */

long FUN_1032611fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103261228; end: 1032612d3;  */

int FUN_103261228(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 2)) {
    uVar1 = *(byte *)(param_1 + 2) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1032612d4; end: 103261383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032612d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4f440) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4f438) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103261384; end: 1032613ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103261384(double param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c6071c();
  lVar2 = _DAT_112f4f440;
  lVar1 = _DAT_112f4f438;
  dVar4 = param_1 - *(double *)(unaff_x20 + _DAT_112f4f440);
  func_0x000107c61428(unaff_x20 + _DAT_112f4f438,auStack_58,0,0);
  dVar3 = *(double *)(unaff_x20 + lVar1);
  if (dVar3 < dVar4) {
    *(double *)(unaff_x20 + lVar2) = param_1;
  }
  return dVar3 < dVar4;
}



/* Entry: 103261400; end: 103261453;  */

void FUN_103261400(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103261454; end: 10326158b;  */

undefined *
FUN_103261454(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5b00;
  if (param_5 < 2) {
    if (param_5 == 0) {
      func_0x000107c61168(PTR_PTR_1126b5b00);
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c43970(puVar1);
    }
    else {
      func_0x000107c61168(PTR_PTR_1126b5b00);
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c43970(puVar1);
    }
  }
  else {
    if (param_5 != 2) {
      func_0x000107c61168(PTR_PTR_1126b5b00);
      func_0x000107c3f650();
      func_0x000107c61180();
      return puVar1;
    }
    func_0x000107c61168(PTR_PTR_1126b5b00);
    func_0x000107c5fadc(param_2,param_3);
    if ((param_1 & 1) == 0) {
      func_0x000107c5da2c(puVar1);
    }
    else {
      func_0x000107c5d248();
    }
  }
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  return puVar1;
}



/* Entry: 10326158c; end: 103261773;  */

long FUN_10326158c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,byte param_9)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  plVar2 = &lStack_70;
  if (param_9 < 2) {
    if (param_9 == 0) {
      lVar4 = param_8;
      uVar3 = param_1;
      func_0x000107c5b9c4();
      if ((int)lVar4 == 2) {
        lVar4 = param_8;
        lVar7 = param_2;
        func_0x000107c4fe14();
        func_0x000107c61180();
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10326cf18);
          (*pcVar1)();
        }
        lVar5 = lVar4;
        func_0x000107c5faec();
        func_0x000107c61170(lVar4);
        func_0x000107c5caa0();
        func_0x000107c5c734();
        func_0x000107c61180();
        if (param_2 == 0) {
          func_0x000107c6142c(lVar7);
          lVar4 = 0;
        }
        else {
          lVar4 = param_2;
          func_0x000107c614f0();
          uVar3 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c61538();
          FUN_10326db34(lVar5,lVar7,0x5a0,uVar3,lVar4);
          func_0x000107c615e8(param_2);
          puVar6 = &UNK_11062dd20;
          func_0x000107c613fc(&UNK_11062dd20,0x14,7);
          *(int *)(puVar6 + 0x10) = (int)param_8;
          uVar3 = 0x112d36838;
          func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
          lVar4 = 0x10326d0f4;
          func_0x0001000bfde0(0x10326d0f4,puVar6,uVar3);
          func_0x000107c61574(lVar5);
          func_0x000107c61574(puVar6);
          func_0x000107c6142c(lVar7);
        }
        return lVar4;
      }
      if ((int)lVar4 == 1) {
        func_0x000107c4b7e4();
        func_0x000107c61180();
        if (param_8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10326ca04);
          (*pcVar1)();
        }
        lVar4 = param_8;
        func_0x000107c5faec();
        func_0x000107c61170(param_8);
        func_0x00010326ccec(lVar4,uVar3,param_1);
        func_0x000107c6142c(uVar3);
      }
      else {
        lVar4 = 0;
      }
      return lVar4;
    }
    func_0x00010326cc4c(param_6,param_7,param_8,param_1);
  }
  else {
    lStack_70 = param_6;
    uStack_68 = param_7;
    lStack_60 = param_8;
    if (param_9 == 2) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_4 == 0) {
        return 0;
      }
      lVar4 = param_4;
      func_0x000107c614f0();
      if (lRam0000000112f4f480 != -1) {
        func_0x000107c61568(0x112f4f480,0x103261c64);
      }
      param_6 = lRam0000000113807170;
      uStack_58 = 2;
      func_0x000107c61434(param_7);
    }
    else {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_4 == 0) {
        return 0;
      }
      lVar4 = param_4;
      func_0x000107c614f0();
      if (lRam0000000112f4f488 != -1) {
        func_0x000107c61568(0x112f4f488,FUN_103261bc0);
      }
      uStack_58 = 3;
      param_6 = lRam0000000113807178;
    }
    puVar6 = &UNK_11062ce78;
    func_0x000107c5fb18(&lStack_70,&UNK_11062ce78);
    uVar3 = 0;
    func_0x0001048b0ec8(0);
    func_0x000107c610f8();
    func_0x0001048b0b48(plVar2,puVar6,0xf,uVar3);
    FUN_10326df5c(param_6,plVar2,param_5,lVar4);
    func_0x000107c615e8(param_4);
    func_0x000107c61170(plVar2);
  }
  return param_6;
}



/* Entry: 103261774; end: 10326181f;  */

void FUN_103261774(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103261820; end: 10326182f;  */

void FUN_103261820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103261830; end: 10326187f;  */

void FUN_103261830(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f4f470 != 0) {
    return;
  }
  puVar1 = &UNK_11062cde8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f4f470 = param_1;
  return;
}



/* Entry: 103261880; end: 10326191b;  */

long FUN_103261880(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10326191c; end: 10326192f;  */

/* WARNING: Possible PIC construction at 0x00010326195c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103261960) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

undefined8 FUN_10326191c(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  cVar1 = *(char *)(param_1 + 3);
  if (((cVar1 != '\x02') && (cVar1 != '\x01')) && (cVar1 != '\0')) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2,uVar2,param_1[2]);
  return uVar2;
}



/* Entry: 103261930; end: 10326198b;  */

/* WARNING: Possible PIC construction at 0x00010326195c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103261960) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_103261930(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (((param_4 != '\x02') && (param_4 != '\x01')) && (param_4 != '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10326198c; end: 103261a53;  */

undefined8 * FUN_10326198c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x0001032618ac(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 103261a54; end: 103261a9f;  */

undefined8 * FUN_103261a54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_103261930(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 103261aa0; end: 103261b7b;  */

int FUN_103261aa0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103261b7c; end: 103261bbf;  */

void FUN_103261b7c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4f478 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_103261830(0xff);
  puVar2 = &UNK_10dba2968;
  func_0x000107c61520(&UNK_10dba2968,uVar1);
  puRam0000000112f4f478 = puVar2;
  return;
}



/* Entry: 103261bc0; end: 103261d07;  */

void FUN_103261bc0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aebd8;
  func_0x000107c61168();
  uVar2 = 0xd000000000000055;
  func_0x000107c5fadc(0xd000000000000055,0x800000010f132590);
  uVar3 = 0xd000000000000055;
  func_0x000107c5fadc(0xd000000000000055,0x800000010f1325f0);
  func_0x000107c5183c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  puRam0000000113807178 = puVar1;
  return;
}



/* Entry: 103261d08; end: 103261d1b;  */

bool FUN_103261d08(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103261d1c; end: 103261e23;  */

void FUN_103261d1c(void)

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



/* Entry: 103261e24; end: 103261e8f;  */

undefined8 * FUN_103261e24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar3;
  pcVar2 = (code *)**(undefined8 **)(lVar3 + -8);
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  (*pcVar2)(param_1 + 2,param_2 + 2,lVar3);
  return param_1;
}



/* Entry: 103261e90; end: 103261ef7;  */

undefined8 * FUN_103261e90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  func_0x000100083374(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 103261ef8; end: 103261f53;  */

undefined8 * FUN_103261ef8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c615e8(uVar1);
  func_0x0001000834e4(param_1 + 2);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 103261f54; end: 103261ff7;  */

int FUN_103261f54(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103261ff8; end: 10326213b;  */

void FUN_103261ff8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long *unaff_x20;
  undefined1 uStack_51;
  
  lVar2 = *unaff_x20;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112f4f490,&UNK_10dba2d10);
    uStack_51 = 0;
    func_0x000100854cb0(&uStack_51);
  }
  else {
    lVar4 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    func_0x0001000a8868(unaff_x20 + 2,lVar4);
    uVar3 = param_1;
    (**(code **)(lVar1 + 8))(param_1,param_2,lVar4,lVar1);
    lVar4 = lVar2;
    func_0x000107c614f0(lVar2);
    FUN_103263124(param_1,param_2,unaff_x20[1],lVar4);
    puVar5 = &UNK_11062cf78;
    func_0x000107c613fc(&UNK_11062cf78,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar3;
    func_0x000107c61174(uVar3);
    func_0x00010068b194(FUN_103262200,puVar5,&UNK_11062d038);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(param_1);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 10326213c; end: 1032621ff;  */

code * FUN_10326213c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined1 uStack_31;
  
  lVar5 = *param_1;
  puVar1 = &UNK_11062cfa0;
  func_0x000107c613fc(&UNK_11062cfa0,0x11,7);
  if (lVar5 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010901c518();
    lVar2 = lVar5;
  }
  puVar1[0x10] = (char)lVar2;
  FUN_10326e3ac();
  uStack_31 = (undefined1)lVar5;
  puVar3 = &uStack_31;
  func_0x0001006c71a4(puVar3);
  func_0x000107c61574(lVar2);
  func_0x000107c6157c(puVar1);
  pcVar4 = FUN_103262284;
  func_0x0001000bfde0(FUN_103262284,puVar1,&UNK_11062d038);
  func_0x000107c61574(puVar3);
  func_0x000107c61578(puVar1,2);
  return pcVar4;
}



/* Entry: 103262200; end: 103262207;  */

code * FUN_103262200(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined1 uStack_31;
  
  lVar5 = *param_1;
  puVar1 = &UNK_11062cfa0;
  func_0x000107c613fc(&UNK_11062cfa0,0x11,7);
  if (lVar5 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010901c518();
    lVar2 = lVar5;
  }
  puVar1[0x10] = (char)lVar2;
  FUN_10326e3ac();
  uStack_31 = (undefined1)lVar5;
  puVar3 = &uStack_31;
  func_0x0001006c71a4(puVar3);
  func_0x000107c61574(lVar2);
  func_0x000107c6157c(puVar1);
  pcVar4 = FUN_103262284;
  func_0x0001000bfde0(FUN_103262284,puVar1,&UNK_11062d038);
  func_0x000107c61574(puVar3);
  func_0x000107c61578(puVar1,2);
  return pcVar4;
}



/* Entry: 103262208; end: 103262283;  */

void FUN_103262208(undefined1 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  bVar1 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  uVar2 = 2;
  if (*(char *)(param_3 + 0x10) == '\0') {
    uVar2 = 3;
  }
  if ((bVar1 & 1) == 0) {
    uVar2 = 1;
    func_0x000107c61428(param_3 + 0x10,auStack_60,1,0);
    *(undefined1 *)(param_3 + 0x10) = 0;
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 103262284; end: 1032623f3;  */

void FUN_103262284(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  long unaff_x20;
  undefined1 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  bVar1 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  uVar2 = 2;
  if (*(char *)(unaff_x20 + 0x10) == '\0') {
    uVar2 = 3;
  }
  if ((bVar1 & 1) == 0) {
    uVar2 = 1;
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,1,0);
    *(undefined1 *)(unaff_x20 + 0x10) = 0;
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1032623f4; end: 103262433;  */

void FUN_1032623f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2a44;
  func_0x000107c61520(&UNK_10dba2a44,&UNK_11062d038);
  puRam0000000112f4f498 = puVar1;
  return;
}



/* Entry: 103262434; end: 103262463;  */

void FUN_103262434(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103262464; end: 10326246f;  */

void FUN_103262464(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103262470; end: 103262493;  */

void FUN_103262470(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103262494; end: 103262513;  */

undefined8 FUN_103262494(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  FUN_10326e5cc(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x00010326e308(param_1,param_2);
  lVar1 = *(long *)(lVar1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3d740();
    func_0x000107c615e8(lVar1);
  }
  return param_1;
}



/* Entry: 103262514; end: 103262533;  */

void FUN_103262514(void)

{
  func_0x000107c61168(&PTR_PTR_112f4f4e0);
  return;
}



/* Entry: 103262534; end: 1032625c3;  */

long FUN_103262534(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032625c4; end: 10326262f;  */

undefined8 * FUN_1032625c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103262630; end: 103262673;  */

undefined8 * FUN_103262630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61170(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103262674; end: 10326274f;  */

int FUN_103262674(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103262750; end: 10326294b;  */

ulong FUN_103262750(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    uVar7 = uVar10;
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    uVar10 = uVar7;
    func_0x000107c60480();
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    lVar9 = 4;
    do {
      uVar11 = lVar9 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1032628e0);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_1 + lVar9 * 8);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar11;
        param_2 = param_1;
        func_0x0001032229c0();
      }
      uVar1 = lVar9 - 3;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032628dc);
        (*pcVar2)();
      }
      uVar11 = uVar4;
      func_0x000107c3cf80();
      func_0x000107c61180();
      if (uVar11 != 0) {
        uVar5 = uVar11;
        func_0x000107c3cfdc();
        iVar3 = (int)uVar5;
        if (iVar3 != 0x2a) {
          uVar5 = uVar11;
          if (iVar3 == 0xc) {
            func_0x000107c4f604();
            func_0x000107c61180();
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10326294c);
              (*pcVar2)();
            }
            uVar6 = uVar5;
            func_0x000107c44f0c();
            uVar8 = param_2;
          }
          else {
            if (iVar3 != 0xb) goto LAB_1032627a0;
            func_0x000107c5da28();
            func_0x000107c61180();
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103262948);
              (*pcVar2)();
            }
            uVar6 = uVar5;
            func_0x000107c5d984();
            uVar8 = param_2;
          }
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          param_2 = uVar8;
          if (uVar6 != 0) {
            uVar5 = uVar6;
            func_0x000107c5faec();
            param_2 = uVar8;
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar11);
            uVar11 = uVar5 & 0xffffffffffff;
            if ((uVar8 & 0x2000000000000000) != 0) {
              uVar11 = uVar8 >> 0x38 & 0xf;
            }
            if (uVar11 != 0) {
              return uVar10;
            }
            func_0x000107c6142c(uVar8);
            goto LAB_1032627a8;
          }
        }
LAB_1032627a0:
        func_0x000107c61170(uVar11);
      }
LAB_1032627a8:
      func_0x000107c61170(uVar4);
      lVar9 = lVar9 + 1;
    } while (uVar1 != uVar7);
  }
  return uVar10;
}



/* Entry: 10326294c; end: 103262a47;  */

undefined8
FUN_10326294c(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6,
             ulong param_7,long param_8)

{
  ulong uVar1;
  
  if (param_1 != param_5) {
    return 0;
  }
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    FUN_103262a48(0);
    func_0x000107c61174(param_6);
    func_0x000107c61174();
    uVar1 = param_2;
    func_0x000107c60118();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_6);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) &&
          (((param_3 == param_7 && (param_4 == param_8)) ||
           (func_0x000107c605b8(param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 103262a48; end: 103262a8b;  */

void FUN_103262a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d158 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d4b28;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f4d158 = puVar1;
  return;
}



/* Entry: 103262a8c; end: 103262d67;  */

undefined * FUN_103262a8c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  long alStack_a0 [4];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar5 = unaff_x20;
  func_0x000107c447fc();
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((int)lVar5 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c40ddc();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103262d60);
      (*pcVar3)();
    }
    lVar6 = lVar5;
    func_0x000107c44c38();
    func_0x000107c61170(lVar5);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((int)lVar6 != 0) {
      func_0x000107c40ddc();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103262d64);
        (*pcVar3)();
      }
      lVar5 = unaff_x20;
      func_0x000107c5ea0c();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar5 != 0) {
        func_0x000107c614bc(alStack_a0,auStack_80,param_1);
        func_0x000107c61170(lVar5);
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (alStack_a0[0] != 0) {
          lVar5 = alStack_a0[0];
          func_0x000107c42470();
          if (lVar5 == 0) {
            func_0x000107c61170(alStack_a0[0]);
            puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            lVar5 = alStack_a0[0];
            func_0x000107c4246c();
            func_0x000107c61180();
            if (lVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103262d68);
              (*pcVar3)();
            }
            lStack_d0 = alStack_a0[0];
            lStack_d8 = lVar5;
            func_0x000107c600f4(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x000100e15a08();
            func_0x000107c601c0(auStack_80,lVar4,lVar5);
            puVar2 = PTR___sypN_11034f1a8;
            puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
            while (lStack_68 != 0) {
              func_0x000100102924(auStack_80,alStack_a0);
              func_0x000100102924(alStack_a0,auStack_c8);
              uVar9 = 0;
              FUN_1032630e4(0,0x112f4f540,&PTR_PTR_1126df4c8);
              plVar10 = &lStack_a8;
              func_0x000107c6147c(plVar10,auStack_c8,puVar2 + 8,uVar9,6);
              lVar6 = lStack_a8;
              if ((((ulong)plVar10 & 1) != 0) && (lStack_a8 != 0)) {
                puVar8 = puVar11;
                func_0x000107c61550();
                if (((int)puVar8 == 0) ||
                   (((long)puVar11 < 0 || (puVar8 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)))) {
                  if ((ulong)puVar11 >> 0x3e == 0) {
                    puVar7 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar7 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar11) {
                      puVar7 = puVar11;
                    }
                    func_0x000107c60480(puVar7);
                  }
                  puVar8 = (undefined *)0x0;
                  FUN_103262e04(0,puVar7 + 1,1,puVar11);
                }
                uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
                uVar1 = *(ulong *)(uVar12 + 0x10);
                puVar11 = puVar8;
                if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
                  puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
                  FUN_103262e04(puVar11,uVar1 + 1,1,puVar8);
                  uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
                }
                *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
                *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar6;
              }
              func_0x000107c601c0(auStack_80,lVar4,lVar5);
            }
            func_0x000107c61170(lStack_d8);
            func_0x000107c61170(lStack_d0);
            (**(code **)(lVar13 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4)
            ;
          }
        }
      }
    }
  }
  return puVar11;
}



/* Entry: 103262d68; end: 103262d8b;  */

void FUN_103262d68(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f4d5e0;
  plVar5 = (long *)&UNK_10db9f778;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1032630e4(0,0x112f4d150,&PTR_PTR_1126acdc0);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103262d8c; end: 103262e03;  */

void FUN_103262d8c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1032630e4(0,param_1,param_2);
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



/* Entry: 103262e04; end: 103262f2b;  */

ulong FUN_103262e04(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103262f2c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103262f2c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103262f28);
      (*pcVar1)();
    }
    FUN_103262fcc(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103262f2c; end: 103262fcb;  */

undefined * FUN_103262f2c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112f4f540;
    FUN_103262d8c(0x112f4f540,&PTR_PTR_1126df4c8,0x112f4f548,&UNK_10dba2b18);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103262fcc; end: 1032630e3;  */

long FUN_103262fcc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032630e0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032630e4);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1032630e4(0,0x112f4f540,&PTR_PTR_1126df4c8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1032630e4(0,0x112f4f540,&PTR_PTR_1126df4c8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1032630dc);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1032630e4; end: 103263123;  */

void FUN_1032630e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103263124; end: 10326337b;  */

void FUN_103263124(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x0001000285a8(0x112f4f558,&UNK_10dba2b28);
    uStack_48 = 0;
    func_0x000100854cb0(&uStack_48);
  }
  else {
    puVar2 = &UNK_11062d138;
    func_0x000107c613fc(&UNK_11062d138,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_11062d160;
    func_0x000107c613fc(&UNK_11062d160,0x38,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    *(ulong *)(puVar3 + 0x20) = param_1;
    *(ulong *)(puVar3 + 0x28) = param_2;
    *(undefined8 *)(puVar3 + 0x30) = param_3;
    func_0x0001000285a8(0x112f4f550,&UNK_10dba2b20);
    func_0x000107c613fc();
    func_0x000107c61434(param_2);
    func_0x000107c615f0(param_3);
    func_0x0001000b64ac(FUN_10326337c,puVar3);
  }
  return;
}



/* Entry: 10326337c; end: 10326338b;  */

void FUN_10326337c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0,lVar6,*(undefined8 *)(unaff_x20 + 0x10));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c4f7c0();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326337c);
      (*pcVar2)();
    }
    pcStack_68 = FUN_10326338c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_101043a98;
    puStack_70 = &UNK_11062d178;
    ppuVar5 = &puStack_88;
    uStack_60 = param_1;
    func_0x000107c60bc4(ppuVar5);
    uVar1 = uStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c5b49c(lVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar6);
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10326338c; end: 1032633af;  */

void FUN_10326338c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 1032633b0; end: 1032633cb;  */

void FUN_1032633b0(long param_1,long param_2)

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



/* Entry: 1032633cc; end: 103263593;  */

code * FUN_1032633cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *apuStack_60 [2];
  
  puVar1 = &UNK_10dba2b30;
  func_0x000107c614e0();
  puVar2 = &UNK_10dba2b50;
  apuStack_60[0] = puVar1;
  func_0x000107c614e0(&UNK_10dba2b50,apuStack_60);
  uVar3 = 0;
  FUN_1032637f4(0,0x112f4d740,&PTR_PTR_1126caaf8);
  pcVar4 = FUN_103263700;
  func_0x0001000d5158(FUN_103263700,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  puVar1 = &UNK_11062d1d0;
  func_0x000107c613fc(&UNK_11062d1d0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar5 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0x112f4f560;
  func_0x0001000285a8(0x112f4f560,&UNK_10dba2ba0);
  uVar6 = 0x103263708;
  func_0x0001000bfde0(0x103263708,puVar1,uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar1);
  func_0x000103263730();
  func_0x0001000c2068();
  func_0x000107c61574(uVar6);
  puVar2 = &UNK_11062d1f8;
  func_0x000107c613fc(&UNK_11062d1f8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar5);
  uVar3 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  pcVar4 = FUN_103263870;
  func_0x00010068b194(FUN_103263870,puVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return pcVar4;
}



/* Entry: 103263594; end: 1032635df;  */

void FUN_103263594(void)

{
  func_0x0001000285a8(0x112f4f5c8,&UNK_10dba2c58);
  func_0x000107c5fa54();
  return;
}



/* Entry: 1032635e0; end: 1032636ff;  */

void FUN_1032635e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[2];
    uVar4 = *param_2;
    func_0x000107c61434(lVar1);
    FUN_10326a398(uVar4,lVar1,uVar3,uVar2);
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 103263700; end: 103263707;  */

void FUN_103263700(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  auStack_68[0] = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  uStack_58 = *(undefined8 *)(param_2 + 0x10);
  uStack_60 = uVar3;
  uStack_48 = uVar2;
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c614bc(param_1,auStack_68);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 103263708; end: 10326379f;  */

void FUN_103263708(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103263d60();
  *param_1 = uVar1;
  return;
}



/* Entry: 1032637a0; end: 1032637f3;  */

void FUN_1032637a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4f570 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1032637f4(0xff,0x112f4f540,&PTR_PTR_1126df4c8);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112f4f570 = puVar2;
  return;
}



/* Entry: 1032637f4; end: 103263833;  */

void FUN_1032637f4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103263834; end: 10326386f;  */

void FUN_103263834(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103263870; end: 10326387f;  */

code * FUN_103263870(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined1 auStack_2c8 [304];
  undefined1 auStack_198 [312];
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = *param_1;
  lVar5 = lVar4;
  uVar13 = uVar2;
  FUN_103263f00();
  lVar6 = lVar5;
  uVar12 = uVar11;
  func_0x00010326b67c();
  if (lVar4 != 0) {
    func_0x000107c61174();
    lVar7 = lVar4;
    func_0x000107c44f7c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103263a68);
      (*pcVar3)();
    }
    lVar8 = lVar7;
    func_0x000107c3e214();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103263a6c);
      (*pcVar3)();
    }
    lVar7 = lVar8;
    FUN_10326c954(lVar8,uVar10,uVar2,uVar1);
    func_0x000107c61170(lVar8);
    if (lVar7 != 0) {
      puVar9 = &UNK_11062d2b8;
      func_0x000107c613fc(&UNK_11062d2b8,0x41,7);
      *(long *)(puVar9 + 0x10) = lVar5;
      *(undefined8 *)(puVar9 + 0x18) = uVar11;
      puVar9[0x20] = (char)uVar13;
      *(long *)(puVar9 + 0x28) = lVar4;
      *(long *)(puVar9 + 0x30) = lVar6;
      *(undefined8 *)(puVar9 + 0x38) = uVar12;
      puVar9[0x40] = 3;
      func_0x000107c61174(lVar4);
      func_0x000107c61434(uVar11);
      func_0x000107c61434(uVar12);
      uVar10 = 0x112f4b9f0;
      func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
      pcVar3 = FUN_103264010;
      func_0x0001000bfde0(FUN_103264010,puVar9,uVar10);
      func_0x000107c61170(lVar4);
      func_0x000107c61574(lVar7);
      func_0x000107c61574(puVar9);
      func_0x000107c6142c(uVar11);
      func_0x000107c6142c(uVar12);
      return pcVar3;
    }
    func_0x000107c61170(lVar4);
  }
  func_0x0001000285a8(0x112f4f5c0,&UNK_10dba2c20);
  func_0x0001031f4750(auStack_198);
  func_0x000107c610b4(auStack_2c8,auStack_198,0x130);
  pcVar3 = (code *)auStack_2c8;
  func_0x000100854cb0(pcVar3);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar12);
  FUN_103263fc8(auStack_2c8);
  return pcVar3;
}



/* Entry: 103263880; end: 103263a6b;  */

code * FUN_103263880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_2c8 [304];
  undefined1 auStack_198 [312];
  
  lVar2 = param_1;
  uVar7 = param_3;
  FUN_103263f00();
  lVar3 = lVar2;
  uVar8 = param_5;
  func_0x00010326b67c();
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar4 = param_1;
    func_0x000107c44f7c();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103263a68);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c3e214();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103263a6c);
      (*pcVar1)();
    }
    lVar4 = lVar5;
    FUN_10326c954(lVar5,param_2,param_3,param_4);
    func_0x000107c61170(lVar5);
    if (lVar4 != 0) {
      puVar6 = &UNK_11062d2b8;
      func_0x000107c613fc(&UNK_11062d2b8,0x41,7);
      *(long *)(puVar6 + 0x10) = lVar2;
      *(undefined8 *)(puVar6 + 0x18) = param_5;
      puVar6[0x20] = (char)uVar7;
      *(long *)(puVar6 + 0x28) = param_1;
      *(long *)(puVar6 + 0x30) = lVar3;
      *(undefined8 *)(puVar6 + 0x38) = uVar8;
      puVar6[0x40] = 3;
      func_0x000107c61174(param_1);
      func_0x000107c61434(param_5);
      func_0x000107c61434(uVar8);
      uVar7 = 0x112f4b9f0;
      func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
      pcVar1 = FUN_103264010;
      func_0x0001000bfde0(FUN_103264010,puVar6,uVar7);
      func_0x000107c61170(param_1);
      func_0x000107c61574(lVar4);
      func_0x000107c61574(puVar6);
      func_0x000107c6142c(param_5);
      func_0x000107c6142c(uVar8);
      return pcVar1;
    }
    func_0x000107c61170(param_1);
  }
  func_0x0001000285a8(0x112f4f5c0,&UNK_10dba2c20);
  func_0x0001031f4750(auStack_198);
  func_0x000107c610b4(auStack_2c8,auStack_198,0x130);
  pcVar1 = (code *)auStack_2c8;
  func_0x000100854cb0(pcVar1);
  func_0x000107c6142c(param_5);
  func_0x000107c6142c(uVar8);
  FUN_103263fc8(auStack_2c8);
  return pcVar1;
}



/* Entry: 103263a6c; end: 103263a77;  */

code * FUN_103263a6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined *apuStack_60 [2];
  
  uVar1 = *unaff_x20;
  uVar8 = unaff_x20[1];
  uVar9 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  puVar3 = &UNK_10dba2b30;
  func_0x000107c614e0();
  puVar4 = &UNK_10dba2b50;
  apuStack_60[0] = puVar3;
  func_0x000107c614e0(&UNK_10dba2b50,apuStack_60);
  uVar5 = 0;
  FUN_1032637f4(0,0x112f4d740,&PTR_PTR_1126caaf8);
  pcVar6 = FUN_103263700;
  func_0x0001000d5158(FUN_103263700,puVar4,uVar5);
  func_0x000107c61574(puVar4);
  puVar3 = &UNK_11062d1d0;
  func_0x000107c613fc(&UNK_11062d1d0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  uVar7 = uVar2;
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0x112f4f560;
  func_0x0001000285a8(0x112f4f560,&UNK_10dba2ba0);
  uVar10 = 0x103263708;
  func_0x0001000bfde0(0x103263708,puVar3,uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar3);
  func_0x000103263730();
  func_0x0001000c2068();
  func_0x000107c61574(uVar10);
  puVar4 = &UNK_11062d1f8;
  func_0x000107c613fc(&UNK_11062d1f8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar8;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar7);
  uVar5 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  pcVar6 = FUN_103263870;
  func_0x00010068b194(FUN_103263870,puVar4,uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  return pcVar6;
}



/* Entry: 103263a78; end: 103263a9b;  */

void FUN_103263a78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103263a9c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103263a9c; end: 103263adb;  */

void FUN_103263a9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dba2bd8;
  func_0x000107c61520(&DAT_10dba2bd8,&UNK_11062d290);
  puRam0000000112f4f578 = puVar1;
  return;
}



/* Entry: 103263adc; end: 103263af7;  */

void FUN_103263adc(void)

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



/* Entry: 103263af8; end: 103263b2f;  */

undefined * FUN_103263af8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x0001031f57bc();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 103263b30; end: 103263b93;  */

long FUN_103263b30(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103263b94; end: 103263c73;  */

undefined8 * FUN_103263b94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c6157c();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 103263c74; end: 103263cc7;  */

undefined8 * FUN_103263c74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103263cc8; end: 103263d5f;  */

int FUN_103263cc8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103263d60; end: 103263eff;  */

ulong FUN_103263d60(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  puVar9 = &UNK_10dba2c30;
  func_0x000107c614e0();
  puVar3 = puVar9;
  FUN_103262a8c();
  func_0x000107c61574(puVar9);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar9 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar9 != (undefined *)0x0) {
    uVar10 = 0;
    do {
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103263eb0);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar3 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar10;
        FUN_10326b36c(uVar10,puVar3);
      }
      puVar1 = (undefined *)(uVar10 + 1);
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103263eac);
        (*pcVar2)();
      }
      uVar5 = uVar4;
      func_0x000107c3cf80();
      func_0x000107c61180();
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103263f00);
        (*pcVar2)();
      }
      uVar6 = uVar5;
      func_0x000107c3cfdc();
      func_0x000107c61170(uVar5);
      uVar5 = uVar4;
      func_0x000107c5c950();
      uVar7 = uVar4;
      func_0x000107c44f7c();
      func_0x000107c61180();
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103263efc);
        (*pcVar2)();
      }
      uVar8 = uVar7;
      func_0x000107c4472c();
      func_0x000107c61170(uVar7);
      uVar7 = uVar4;
      func_0x000107c446c8();
      if (((((int)uVar7 != 0) && ((int)uVar6 == 0xe)) && ((int)uVar5 == 2)) && ((uVar8 & 1) != 0)) {
        func_0x000107c6142c(puVar3);
        return uVar4;
      }
      func_0x000107c61170(uVar4);
      uVar10 = uVar10 + 1;
    } while (puVar1 != puVar9);
  }
  func_0x000107c6142c(puVar3);
  return 0;
}



/* Entry: 103263f00; end: 103263fc7;  */

undefined8 FUN_103263f00(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  if (param_2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_2 != 0) {
      lVar2 = param_2;
      func_0x000107c4b308();
      if (((int)lVar2 == 0) || (param_1 == 0)) {
        func_0x000107c615e8(param_2);
      }
      else {
        func_0x000107c3cf80();
        func_0x000107c61180();
        if (param_1 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103263fc4);
          (*pcVar1)();
        }
        lVar2 = param_1;
        func_0x000107c4adbc();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103263fc8);
          (*pcVar1)();
        }
        func_0x000107c4a3a4(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(param_2);
      }
    }
  }
  return 0x6172656d6163;
}



/* Entry: 103263fc8; end: 10326400f;  */

undefined8 FUN_103263fc8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103264010; end: 10326403b;  */

void FUN_103264010(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
  long lStack_240;
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
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  
  uVar10 = *(ulong *)(unaff_x20 + 0x28);
  uVar9 = *(ulong *)(unaff_x20 + 0x30);
  uVar12 = *(ulong *)(unaff_x20 + 0x38);
  lVar5 = *param_2;
  uVar8 = *(ulong *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x40);
  if (lVar5 == 0) {
    func_0x0001031f4750(&lStack_190);
    func_0x000107c610b4(param_1,&lStack_190,0x130);
    return;
  }
  param_1[2] = uVar8;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = uVar2;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  uVar6 = uVar10;
  func_0x000107c5cac8();
  if ((int)uVar6 == 3) {
    uVar6 = uVar10;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10326a8b0);
      (*pcVar4)();
    }
    uVar7 = uVar6;
    func_0x000107c5faec();
    uVar11 = uVar8;
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(uVar8);
    uVar6 = uVar7 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar6 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      uVar8 = uVar10;
      func_0x000107c5c82c();
      func_0x000107c61180();
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10326a8b4);
        (*pcVar4)();
      }
      uVar9 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      uVar12 = uVar11;
      goto LAB_10326a764;
    }
  }
  func_0x000107c61434(uVar12);
LAB_10326a764:
  lStack_2f0 = lVar5;
  func_0x0001031e60f0(&lStack_2f0);
  uStack_1b8 = uStack_268;
  uStack_1c0 = uStack_270;
  uStack_1a8 = uStack_258;
  uStack_1b0 = uStack_260;
  uStack_19f = uStack_24f;
  uStack_1a7 = uStack_257;
  uStack_1a0 = uStack_250;
  uStack_1f8 = uStack_2a8;
  uStack_200 = uStack_2b0;
  uStack_1e8 = uStack_298;
  uStack_1f0 = uStack_2a0;
  uStack_1d8 = uStack_288;
  uStack_1e0 = uStack_290;
  uStack_1c8 = uStack_278;
  uStack_1d0 = uStack_280;
  uStack_238 = uStack_2e8;
  lStack_240 = lStack_2f0;
  uStack_228 = uStack_2d8;
  uStack_230 = uStack_2e0;
  uStack_218 = uStack_2c8;
  uStack_220 = uStack_2d0;
  uStack_208 = uStack_2b8;
  uStack_210 = uStack_2c0;
  func_0x0001031e6100(&lStack_240);
  uStack_108 = uStack_1b8;
  uStack_110 = uStack_1c0;
  uStack_f8 = uStack_1a8;
  uStack_100 = uStack_1b0;
  uStack_ef = uStack_19f;
  uStack_f7 = uStack_1a7;
  uStack_f0 = uStack_1a0;
  uStack_148 = uStack_1f8;
  uStack_150 = uStack_200;
  uStack_138 = uStack_1e8;
  uStack_140 = uStack_1f0;
  uStack_128 = uStack_1d8;
  uStack_130 = uStack_1e0;
  uStack_118 = uStack_1c8;
  uStack_120 = uStack_1d0;
  uStack_188 = uStack_238;
  lStack_190 = lStack_240;
  uStack_178 = uStack_228;
  uStack_180 = uStack_230;
  uStack_168 = uStack_218;
  uStack_170 = uStack_220;
  uStack_158 = uStack_208;
  uStack_160 = uStack_210;
  func_0x000107c61174(lVar5);
  func_0x000107c3cf80();
  func_0x000107c61180();
  if (uVar10 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[5] = uVar9;
    param_1[6] = uVar12;
    param_1[7] = 0;
    param_1[0x19] = uStack_108;
    param_1[0x18] = uStack_110;
    param_1[0x1b] = CONCAT71(uStack_f7,uStack_f8);
    param_1[0x1a] = uStack_100;
    *(undefined8 *)((long)param_1 + 0xe1) = uStack_ef;
    *(ulong *)((long)param_1 + 0xd9) = CONCAT17(uStack_f0,uStack_f7);
    param_1[0x11] = uStack_148;
    param_1[0x10] = uStack_150;
    param_1[0x13] = uStack_138;
    param_1[0x12] = uStack_140;
    param_1[0x15] = uStack_128;
    param_1[0x14] = uStack_130;
    param_1[0x17] = uStack_118;
    param_1[0x16] = uStack_120;
    param_1[9] = uStack_188;
    param_1[8] = lStack_190;
    param_1[0xb] = uStack_178;
    param_1[10] = uStack_180;
    param_1[0xd] = uStack_168;
    param_1[0xc] = uStack_170;
    param_1[0xf] = uStack_158;
    param_1[0xe] = uStack_160;
    param_1[0x1f] = 1;
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x20] = uVar10;
    *(undefined1 *)(param_1 + 0x23) = 0;
    *(undefined1 *)((long)param_1 + 0x119) = uVar3;
    param_1[0x25] = 1;
    param_1[0x24] = 0;
    FUN_1031ee258(param_1);
    func_0x000107c61170(lVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10326a8ac);
  (*pcVar4)();
}



/* Entry: 10326403c; end: 103264083;  */

void FUN_10326403c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x00010326c18c();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0d958;
  uVar2 = param_3;
  func_0x000107c5faec();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = ppuVar1;
  param_1[3] = uVar2;
  return;
}



/* Entry: 103264084; end: 1032641eb;  */

long FUN_103264084(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  lVar5 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  uVar6 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar5 + 0x38) = uVar6;
  *(undefined ***)(lVar5 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  uVar6 = 0x112f4c580;
  func_0x0001000285a8(0x112f4c580,&UNK_10db9d0b0);
  *(undefined8 *)(lVar5 + 0x60) = uVar6;
  *(undefined ***)(lVar5 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar5 + 0x48) = uVar2;
  *(undefined8 *)(lVar5 + 0x50) = uVar4;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return lVar5;
}



/* Entry: 1032641ec; end: 1032643df;  */

void FUN_1032641ec(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_2a0 [296];
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  
  lVar1 = *param_1;
  uVar6 = param_1[1];
  if (1 < uVar6 && 0 < lVar1) {
    puVar2 = (undefined1 *)param_1[2];
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      if (lVar1 == 1) {
        FUN_10326503c(1,uVar6,puVar2,lVar3);
        func_0x000107c61174(uVar6);
        func_0x000107c61434(lVar3);
        puVar4 = puVar2;
        FUN_103261ff8(puVar2,lVar3);
      }
      else {
        func_0x0001000285a8(0x112f4f490,&UNK_10dba2d10);
        uStack_178 = 0;
        FUN_10326503c(lVar1,uVar6,puVar2,lVar3);
        func_0x000107c61174(uVar6);
        func_0x000107c61434(lVar3);
        puVar4 = &uStack_178;
        func_0x000100854cb0(puVar4);
      }
      FUN_1032643e0(param_2,&uStack_178);
      puVar5 = &UNK_11062d458;
      func_0x000107c613fc(&UNK_11062d458,0x88,7);
      *(undefined8 *)(puVar5 + 0x50) = uStack_150;
      *(undefined8 *)(puVar5 + 0x48) = uStack_158;
      *(undefined8 *)(puVar5 + 0x60) = uStack_140;
      *(undefined8 *)(puVar5 + 0x58) = uStack_148;
      *(undefined8 *)(puVar5 + 0x70) = uStack_130;
      *(undefined8 *)(puVar5 + 0x68) = uStack_138;
      *(undefined8 *)(puVar5 + 0x80) = uStack_120;
      *(undefined8 *)(puVar5 + 0x78) = uStack_128;
      *(undefined8 *)(puVar5 + 0x30) = uStack_170;
      *(ulong *)(puVar5 + 0x28) = CONCAT71(uStack_177,uStack_178);
      *(ulong *)(puVar5 + 0x10) = uVar6;
      *(undefined1 **)(puVar5 + 0x18) = puVar2;
      *(long *)(puVar5 + 0x20) = lVar3;
      *(undefined8 *)(puVar5 + 0x40) = uStack_160;
      *(undefined8 *)(puVar5 + 0x38) = uStack_168;
      func_0x000107c61174(uVar6);
      uVar7 = 0x112f4f5d8;
      func_0x0001000285a8(0x112f4f5d8,&UNK_10dba2c70);
      func_0x00010068b194(FUN_103265070,puVar5,uVar7);
      func_0x000107c6142c(lVar3);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      return;
    }
    FUN_10326503c(lVar1,uVar6,puVar2,0);
    func_0x000107c61170(uVar6);
  }
  func_0x0001000285a8(0x112f4f638,&UNK_10dba2d08);
  FUN_10326500c(&uStack_178);
  func_0x000107c610b4(auStack_2a0,&uStack_178,0x128);
  func_0x000100854cb0(auStack_2a0);
  return;
}



/* Entry: 1032643e0; end: 103264413;  */

undefined8 FUN_1032643e0(undefined8 param_1,undefined8 param_2)

{
  FUN_103264b18(param_2,param_1,&UNK_11062d380);
  return param_2;
}



/* Entry: 103264414; end: 10326441b;  */

void FUN_103264414(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_2a0 [296];
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  
  lVar1 = *param_1;
  uVar6 = param_1[1];
  if (1 < uVar6 && 0 < lVar1) {
    puVar2 = (undefined1 *)param_1[2];
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      if (lVar1 == 1) {
        FUN_10326503c(1,uVar6,puVar2,lVar3);
        func_0x000107c61174(uVar6);
        func_0x000107c61434(lVar3);
        puVar4 = puVar2;
        FUN_103261ff8(puVar2,lVar3);
      }
      else {
        func_0x0001000285a8(0x112f4f490,&UNK_10dba2d10);
        uStack_178 = 0;
        FUN_10326503c(lVar1,uVar6,puVar2,lVar3);
        func_0x000107c61174(uVar6);
        func_0x000107c61434(lVar3);
        puVar4 = &uStack_178;
        func_0x000100854cb0(puVar4);
      }
      FUN_1032643e0(unaff_x20 + 0x10,&uStack_178);
      puVar5 = &UNK_11062d458;
      func_0x000107c613fc(&UNK_11062d458,0x88,7);
      *(undefined8 *)(puVar5 + 0x50) = uStack_150;
      *(undefined8 *)(puVar5 + 0x48) = uStack_158;
      *(undefined8 *)(puVar5 + 0x60) = uStack_140;
      *(undefined8 *)(puVar5 + 0x58) = uStack_148;
      *(undefined8 *)(puVar5 + 0x70) = uStack_130;
      *(undefined8 *)(puVar5 + 0x68) = uStack_138;
      *(undefined8 *)(puVar5 + 0x80) = uStack_120;
      *(undefined8 *)(puVar5 + 0x78) = uStack_128;
      *(undefined8 *)(puVar5 + 0x30) = uStack_170;
      *(ulong *)(puVar5 + 0x28) = CONCAT71(uStack_177,uStack_178);
      *(ulong *)(puVar5 + 0x10) = uVar6;
      *(undefined1 **)(puVar5 + 0x18) = puVar2;
      *(long *)(puVar5 + 0x20) = lVar3;
      *(undefined8 *)(puVar5 + 0x40) = uStack_160;
      *(undefined8 *)(puVar5 + 0x38) = uStack_168;
      func_0x000107c61174(uVar6);
      uVar7 = 0x112f4f5d8;
      func_0x0001000285a8(0x112f4f5d8,&UNK_10dba2c70);
      func_0x00010068b194(FUN_103265070,puVar5,uVar7);
      func_0x000107c6142c(lVar3);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      return;
    }
    FUN_10326503c(lVar1,uVar6,puVar2,0);
    func_0x000107c61170(uVar6);
  }
  func_0x0001000285a8(0x112f4f638,&UNK_10dba2d08);
  FUN_10326500c(&uStack_178);
  func_0x000107c610b4(auStack_2a0,&uStack_178,0x128);
  func_0x000100854cb0(auStack_2a0);
  return;
}



/* Entry: 10326441c; end: 1032648df;  */

void FUN_10326441c(byte *param_1,ulong param_2,ulong param_3,ulong param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_217;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  bVar14 = *param_1;
  uVar13 = param_2;
  uVar10 = param_2;
  func_0x000107c3cf80();
  func_0x000107c61180();
  if (uVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1032648d0);
    (*pcVar3)();
  }
  uVar4 = uVar13;
  func_0x000107c3cfdc();
  func_0x000107c61170(uVar13);
  if (bVar14 < 2) {
    if (bVar14 == 0) {
      bVar14 = 3;
      param_4 = 0;
      param_3 = 0;
      uVar13 = 0;
    }
    else {
      func_0x000107c44f7c();
      func_0x000107c61180();
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032648d4);
        (*pcVar3)();
      }
      uVar13 = param_2;
      func_0x000107c3e214();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032648d8);
        (*pcVar3)();
      }
      func_0x000107c61438(param_4,2);
      func_0x000107c61174(uVar13);
      bVar14 = 0;
    }
  }
  else {
    if (bVar14 == 2) {
      func_0x0001000285a8(0x112f4f638,&UNK_10dba2d08);
      FUN_10326500c(&uStack_190);
      func_0x000107c610b4(&uStack_2b8,&uStack_190,0x128);
      func_0x000100854cb0(&uStack_2b8);
      return;
    }
    if ((int)uVar4 == 0xc) {
      func_0x000107c3cf80();
      func_0x000107c61180();
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032648dc);
        (*pcVar3)();
      }
      uVar13 = param_2;
      func_0x000107c4f604();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032648e0);
        (*pcVar3)();
      }
      uVar5 = uVar13;
      func_0x000107c4f38c();
      func_0x000107c61180();
      func_0x000107c61170(uVar13);
      if (uVar5 == 0) {
        bVar14 = 2;
        func_0x000107c61438(param_4,2);
        uVar13 = 0;
        goto LAB_1032645b8;
      }
      param_3 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      param_4 = uVar10;
    }
    else {
      func_0x000107c61434(param_4);
    }
    func_0x000107c61434(param_4);
    uVar13 = 0;
    bVar14 = 2;
  }
LAB_1032645b8:
  uVar6 = (ulong)((int)uVar4 == 0xc);
  lVar7 = *param_5;
  lVar11 = param_5[1];
  lVar1 = param_5[2];
  lVar2 = param_5[3];
  lVar12 = param_5[0xb];
  uVar10 = param_3;
  uVar4 = param_4;
  uVar5 = uVar13;
  FUN_103261454();
  FUN_10326158c(lVar7,lVar11,lVar1,lVar2,lVar12,param_3,param_4,uVar13,bVar14);
  if (lVar7 == 0) {
    uStack_180 = 0x6e6f69746e656d;
    uStack_178 = 0xe700000000000000;
    if (bVar14 < 2) {
      func_0x00010326b640();
    }
    else if (bVar14 == 2) {
      func_0x00010326b650();
    }
    else {
      func_0x00010326b664();
    }
    func_0x0001000285a8(0x112f4f638,&UNK_10dba2d08);
    func_0x0001031e60c4(&uStack_2b8);
    uStack_e0 = uStack_240;
    uStack_e8 = uStack_248;
    uStack_d0 = uStack_230;
    uStack_d8 = uStack_238;
    uStack_c8 = uStack_228;
    uStack_b7 = uStack_217;
    uStack_120 = uStack_280;
    uStack_128 = uStack_288;
    uStack_110 = uStack_270;
    uStack_118 = uStack_278;
    uStack_100 = uStack_260;
    uStack_108 = uStack_268;
    uStack_f0 = uStack_250;
    uStack_f8 = uStack_258;
    uStack_150 = uStack_2b0;
    uStack_158 = uStack_2b8;
    uStack_140 = uStack_2a0;
    uStack_148 = uStack_2a8;
    uStack_130 = uStack_290;
    uStack_138 = uStack_298;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_a0 = 3;
    uStack_a8 = 0;
    uStack_160 = 0;
    uStack_7f = 1;
    uStack_78 = 0;
    uStack_70 = 1;
    lStack_170 = lVar7;
    lStack_168 = lVar11;
    uStack_98 = uVar6;
    uStack_90 = uVar10;
    uStack_88 = uVar4;
    uStack_80 = (char)uVar5;
    func_0x000103265080(&uStack_190);
    FUN_10320d790(uVar6,uVar10,uVar4,uVar5 & 0xffffffff);
    func_0x000100854cb0(&uStack_190);
    FUN_103261930(param_3,param_4,uVar13,bVar14);
    FUN_103261930(param_3,param_4,uVar13,bVar14);
    FUN_1031e1b78(uVar6,uVar10,uVar4,uVar5 & 0xffffffff);
    FUN_103265084(&uStack_190);
  }
  else {
    puVar8 = &UNK_11062d480;
    func_0x000107c613fc(&UNK_11062d480,0x59,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x6e6f69746e656d;
    *(undefined8 *)(puVar8 + 0x18) = 0xe700000000000000;
    *(ulong *)(puVar8 + 0x20) = param_3;
    *(ulong *)(puVar8 + 0x28) = param_4;
    *(ulong *)(puVar8 + 0x30) = uVar13;
    puVar8[0x38] = bVar14;
    *(ulong *)(puVar8 + 0x40) = uVar6;
    *(ulong *)(puVar8 + 0x48) = uVar10;
    *(ulong *)(puVar8 + 0x50) = uVar4;
    puVar8[0x58] = (char)uVar5;
    func_0x0001032618ac(param_3,param_4,uVar13,bVar14);
    FUN_10320d790(uVar6,uVar10,uVar4,uVar5 & 0xffffffff);
    uVar9 = 0x112f4f5d8;
    func_0x0001000285a8(0x112f4f5d8,&UNK_10dba2c70);
    func_0x0001000bfde0(FUN_1032650cc,puVar8,uVar9);
    FUN_103261930(param_3,param_4,uVar13,bVar14);
    FUN_103261930(param_3,param_4,uVar13,bVar14);
    func_0x000107c61574(lVar7);
    func_0x000107c61574(puVar8);
    FUN_1031e1b78(uVar6,uVar10,uVar4,uVar5 & 0xffffffff);
  }
  return;
}



/* Entry: 1032648e0; end: 1032649b7;  */

code * FUN_1032648e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x112f4f5d0;
  func_0x0001000285a8(0x112f4f5d0,&UNK_10dba2c68);
  uVar2 = 0x103264138;
  func_0x0001000bfde0(0x103264138,0,uVar1);
  FUN_1032643e0();
  puVar3 = &UNK_11062d430;
  func_0x000107c613fc(&UNK_11062d430,0x70,7);
  *(undefined8 *)(puVar3 + 0x38) = uStack_68;
  *(undefined8 *)(puVar3 + 0x30) = uStack_70;
  *(undefined8 *)(puVar3 + 0x48) = uStack_58;
  *(undefined8 *)(puVar3 + 0x40) = uStack_60;
  *(undefined8 *)(puVar3 + 0x58) = uStack_48;
  *(undefined8 *)(puVar3 + 0x50) = uStack_50;
  *(undefined8 *)(puVar3 + 0x68) = uStack_38;
  *(undefined8 *)(puVar3 + 0x60) = uStack_40;
  *(undefined8 *)(puVar3 + 0x18) = uStack_88;
  *(undefined8 *)(puVar3 + 0x10) = uStack_90;
  *(undefined8 *)(puVar3 + 0x28) = uStack_78;
  *(undefined8 *)(puVar3 + 0x20) = uStack_80;
  uVar1 = 0x112f4f5d8;
  func_0x0001000285a8(0x112f4f5d8,&UNK_10dba2c70);
  pcVar4 = FUN_103265110;
  func_0x00010068b194(FUN_103265110,puVar3,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  return pcVar4;
}



/* Entry: 1032649b8; end: 1032649db;  */

void FUN_1032649b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1032649dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1032649dc; end: 103264a1b;  */

void FUN_1032649dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f5e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dba2cb0;
  func_0x000107c61520(&DAT_10dba2cb0,&UNK_11062d380);
  puRam0000000112f4f5e0 = puVar1;
  return;
}


