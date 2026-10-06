/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10320b9a4; end: 10320b9e3;  */

void FUN_10320b9a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9d9e8;
  func_0x000107c61520(&DAT_10db9d9e8,&UNK_1106259a8);
  puRam0000000112f4c740 = puVar1;
  return;
}



/* Entry: 10320b9e4; end: 10320b9ff;  */

void FUN_10320b9e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b7f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b800;
  func_0x00010002969c(0x112f4b800,&UNK_10db9d9e0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b7f8 = puVar2;
  return;
}



/* Entry: 10320ba00; end: 10320ba37;  */

undefined * FUN_10320ba00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010320340c();
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



/* Entry: 10320ba38; end: 10320ba9b;  */

long FUN_10320ba38(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10320ba9c; end: 10320bb8b;  */

undefined8 * FUN_10320ba9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  uVar3 = param_2[4];
  param_1[3] = uVar1;
  param_1[4] = uVar3;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar3);
  return param_1;
}



/* Entry: 10320bb8c; end: 10320bbe7;  */

undefined8 * FUN_10320bb8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61170(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 10320bbe8; end: 10320bc8f;  */

int FUN_10320bbe8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10320bc90; end: 10320bd73;  */

undefined4 * FUN_10320bc90(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10320bd74; end: 10320be33;  */

int FUN_10320bd74(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10320be34; end: 10320be5b;  */

/* WARNING: Possible PIC construction at 0x00010320be48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010320be4c) */

void FUN_10320be34(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10320be5c; end: 10320bef7;  */

undefined8 * FUN_10320be5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x15) = *(undefined1 *)((long)param_2 + 0x15);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  *(undefined1 *)((long)param_1 + 0x17) = *(undefined1 *)((long)param_2 + 0x17);
  return param_1;
}



/* Entry: 10320bef8; end: 10320bf73;  */

undefined8 * FUN_10320bef8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x15) = *(undefined1 *)((long)param_2 + 0x15);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  *(undefined1 *)((long)param_1 + 0x17) = *(undefined1 *)((long)param_2 + 0x17);
  return param_1;
}



/* Entry: 10320bf74; end: 10320c033;  */

int FUN_10320bf74(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10320c034; end: 10320c1cb;  */

bool FUN_10320c034(ulong param_1,ulong param_2,ulong param_3,long param_4,long param_5,ulong param_6
                  )

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    if (param_4 != 0) {
      return false;
    }
  }
  else {
    if (param_4 == 0) {
      return false;
    }
    FUN_10320c1cc(0,0x112f4c790,&PTR_PTR_1126b2398);
    func_0x000107c61174(param_4);
    func_0x000107c61174();
    uVar3 = param_1;
    func_0x000107c60118();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    if ((uVar3 & 1) == 0) {
      return false;
    }
  }
  if (param_2 == 0) {
    if (param_5 != 0) {
      return false;
    }
  }
  else {
    if (param_5 == 0) {
      return false;
    }
    FUN_10320c1cc(0,0x112f4c788,&PTR_PTR_1126b23a8);
    func_0x000107c61174(param_5);
    func_0x000107c61174();
    uVar3 = param_2;
    func_0x000107c60118();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_5);
    if ((uVar3 & 1) == 0) {
      return false;
    }
  }
  if ((((uint)param_3 ^ (uint)param_6) & 1) != 0) {
    return false;
  }
  if (((uint)(param_3 >> 8) & 1) != ((uint)(param_6 >> 8) & 1)) {
    return false;
  }
  if (((uint)(param_3 >> 0x10) & 1) != ((uint)(param_6 >> 0x10) & 1)) {
    return false;
  }
  if (((uint)(param_3 >> 0x18) & 1) != ((uint)(param_6 >> 0x18) & 1)) {
    return false;
  }
  uVar1 = (uint)(param_6 >> 0x20);
  uVar2 = (uint)(param_3 >> 0x20);
  if ((uVar2 & 1) != (uVar1 & 1)) {
    return false;
  }
  if ((uVar2 >> 8 & 1) == (uVar1 >> 8 & 1)) {
    if (((ushort)(param_3 >> 0x30) & 1) == ((ushort)(param_6 >> 0x30) & 1)) {
      return ((param_3 ^ param_6) & 0x100000000000000) == 0;
    }
    return false;
  }
  return false;
}



/* Entry: 10320c1cc; end: 10320c20b;  */

void FUN_10320c1cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10320c20c; end: 10320c27b;  */

undefined8
FUN_10320c20c(uint param_1,ulong param_2,long param_3,uint param_4,ulong param_5,long param_6)

{
  if (((param_1 ^ param_4) & 0x1010101) == 0) {
    if (param_3 == 0) {
      if (param_6 == 0) {
        return 1;
      }
    }
    else if (param_6 != 0) {
      if ((param_2 == param_5) && (param_3 == param_6)) {
        return 1;
      }
      func_0x000107c605b8(param_2,param_3,param_5,param_6,0);
      if ((param_2 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10320c27c; end: 10320c3cf;  */

void FUN_10320c27c(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    lVar4 = param_2;
    func_0x000107c61174();
    lVar1 = param_2;
    func_0x000108436378();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      uVar5 = 0;
      func_0x000108f4b700(param_4,0);
      if ((int)param_4 != 0) {
        FUN_10320fa24();
        lVar1 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar1 + 0x18) = 2;
        *(undefined8 *)(lVar1 + 0x10) = 1;
        *(undefined **)(lVar1 + 0x38) = PTR___sSSN_11034da80;
        lVar3 = lVar1;
        func_0x00010075bbf0();
        *(long *)(lVar1 + 0x40) = lVar3;
        *(long *)(lVar1 + 0x20) = lVar2;
        *(long *)(lVar1 + 0x28) = lVar4;
        func_0x000107c5fb00(param_4,uVar5,lVar1);
        func_0x000107c61170(param_2);
        func_0x000107c6142c(uVar5);
        return;
      }
      func_0x000107c61170(param_2);
      func_0x000107c6142c(lVar4);
    }
  }
  if ((param_3 >> 0x20 & 1) == 0) {
    if (((param_3 >> 0x28 & 1) == 0) || ((param_3 >> 0x30 & 1) != 0)) {
      FUN_10320fbdc();
    }
    else {
      FUN_10320fca8();
    }
  }
  else if ((~(uint)param_3 & 0x10001) == 0) {
    func_0x00010320faf0();
  }
  else {
    FUN_10320fbbc();
  }
  return;
}



/* Entry: 10320c3d0; end: 10320c433;  */

/* WARNING: Possible PIC construction at 0x00010320c3f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010320c3f4) */

void FUN_10320c3d0(long param_1,undefined8 param_2)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 10320c434; end: 10320c443;  */

undefined8 FUN_10320c434(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_1c0 [64];
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar3;
  func_0x000107c5d8c4(uVar3);
  func_0x000107c61180();
  func_0x000107c42e84(uVar3);
  func_0x000107c61180();
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x58);
  lStack_138 = *(long *)(unaff_x20 + 0x20);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x00010326c470();
  func_0x000107c4ab80();
  puVar2 = &UNK_10db9db20;
  func_0x000107c614e0(&UNK_10db9db20);
  lStack_a8 = lStack_138;
  uStack_b0 = uStack_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  uStack_78 = uStack_108;
  uStack_80 = uStack_110;
  if (lStack_138 == 0) {
    func_0x000107c61574();
  }
  else {
    lStack_178 = lStack_138;
    uStack_180 = uStack_140;
    uStack_168 = uStack_128;
    uStack_170 = uStack_130;
    uStack_158 = uStack_118;
    uStack_160 = uStack_120;
    uStack_148 = uStack_108;
    uStack_150 = uStack_110;
    lStack_e8 = lStack_138;
    uStack_f0 = uStack_140;
    uStack_d8 = uStack_128;
    uStack_e0 = uStack_130;
    uStack_c8 = uStack_118;
    uStack_d0 = uStack_120;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    FUN_1031e7474(&uStack_180,auStack_1c0);
    FUN_103206a60(&uStack_f0,&uStack_140,puVar2);
    func_0x0001031e74b0(&uStack_b0);
    func_0x000107c61574(puVar2);
  }
  func_0x000107c4ab80();
  return uVar1;
}



/* Entry: 10320c444; end: 10320c4bb;  */

void FUN_10320c444(ulong *param_1,byte *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*param_2;
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Entry: 10320c4bc; end: 10320c4cb;  */

undefined8 * FUN_10320c4bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 10320c4cc; end: 10320c89b;  */

code * FUN_10320c4cc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x0001000a8868();
  (**(code **)(lVar1 + 8))(param_1,uVar2,lVar1);
  uVar2 = 0x112f4c7b0;
  func_0x0001000285a8(0x112f4c7b0,&UNK_10db9db50);
  uVar3 = 0x10320c6a0;
  func_0x0001000bfde0(0x10320c6a0,0,uVar2);
  uVar2 = 0x10320c774;
  func_0x00010487de38(0x10320c774,0);
  func_0x000107c61574(uVar3);
  uVar3 = 0x112f4c7b8;
  func_0x0001000285a8(0x112f4c7b8,&UNK_10db9db58);
  pcVar4 = FUN_10320c89c;
  func_0x0001000bfde0(FUN_10320c89c,0,uVar3);
  func_0x000107c61574(uVar2);
  pcVar5 = pcVar4;
  func_0x0001006c733c(pcVar4);
  uVar2 = 0x112f4c7c0;
  func_0x0001000285a8(0x112f4c7c0,&UNK_10db9db60);
  pcVar6 = FUN_10320ce58;
  func_0x0001000bfde0(FUN_10320ce58,0,uVar2);
  func_0x000107c61574(pcVar5);
  pcVar5 = FUN_10320cee4;
  func_0x00010487de38(FUN_10320cee4,0);
  func_0x000107c61574(pcVar6);
  uVar2 = 0x112f4c7c8;
  func_0x0001000285a8(0x112f4c7c8,&UNK_10db9db68);
  uVar3 = 0x10320cfc0;
  func_0x0001000bfde0(0x10320cfc0,0,uVar2);
  func_0x000107c61574(pcVar5);
  uVar7 = param_1;
  func_0x0001006c733c(param_1);
  func_0x000107c61574(uVar3);
  uVar2 = 0x112f4c7d0;
  func_0x0001000285a8(0x112f4c7d0,&UNK_10db9db70);
  pcVar6 = FUN_10320d4a0;
  func_0x0001000bfde0(FUN_10320d4a0,0,uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar7);
  return pcVar6;
}



/* Entry: 10320c89c; end: 10320c8eb;  */

void FUN_10320c89c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = *param_2;
  uVar1 = 0;
  if (lStack_40 != 0) {
    FUN_10320c8ec(&uStack_38,&lStack_40);
    uVar1 = uStack_38;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10320c8ec; end: 10320cb03;  */

void FUN_10320c8ec(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = *param_2;
  lVar5 = lVar3;
  func_0x000107c44fd8();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar4 = lVar5;
    func_0x000107c5faec();
    lVar8 = param_3;
    func_0x000107c5fb5c();
    func_0x000107c6142c(param_3);
    if (0 < lVar4) {
      puVar1 = PTR_PTR_1126b23a0;
      func_0x000107c61168();
      func_0x000107c5d994();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      lVar5 = lVar3;
      func_0x000107c5db08();
      func_0x000107c61180();
      if (lVar5 == 0) {
        lVar4 = 0;
        lVar5 = 0;
        lVar2 = lVar8;
      }
      else {
        lVar4 = lVar5;
        func_0x000107c5faec();
        lVar2 = lVar8;
        func_0x000107c61170(lVar5);
        lVar5 = lVar8;
      }
      lVar8 = lVar3;
      func_0x000107c42120();
      func_0x000107c61180();
      if (lVar8 == 0) {
        lVar6 = 0;
        lVar8 = 0;
        lVar9 = lVar2;
      }
      else {
        lVar6 = lVar8;
        func_0x000107c5faec();
        lVar9 = lVar2;
        func_0x000107c61170(lVar8);
        lVar8 = lVar2;
      }
      func_0x000107c3ee5c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        lVar2 = 0;
        lVar9 = 0;
        if (lVar5 == 0) goto LAB_10320ca84;
LAB_10320ca24:
        func_0x000107c5fadc(lVar4,lVar5);
        func_0x000107c6142c(lVar5);
        if (lVar8 != 0) goto LAB_10320ca40;
LAB_10320ca8c:
        lVar6 = 0;
        if (lVar9 == 0) goto LAB_10320ca94;
LAB_10320ca5c:
        func_0x000107c5fadc(lVar2,lVar9);
        func_0x000107c6142c(lVar9);
      }
      else {
        lVar2 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        if (lVar5 != 0) goto LAB_10320ca24;
LAB_10320ca84:
        lVar4 = 0;
        if (lVar8 == 0) goto LAB_10320ca8c;
LAB_10320ca40:
        func_0x000107c5fadc(lVar6,lVar8);
        func_0x000107c6142c(lVar8);
        if (lVar9 != 0) goto LAB_10320ca5c;
LAB_10320ca94:
        lVar2 = 0;
      }
      puVar7 = PTR_PTR_1126b2398;
      func_0x000107c610f8();
      func_0x000107c46d90();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar2);
      goto LAB_10320cae0;
    }
    func_0x000107c61170(lVar5);
  }
  puVar7 = (undefined *)0x0;
LAB_10320cae0:
  *param_1 = puVar7;
  return;
}



/* Entry: 10320cb04; end: 10320ce57;  */

void FUN_10320cb04(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_370 [128];
  undefined8 uStack_2f0;
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
  undefined8 uStack_258;
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
  undefined8 uStack_68;
  
  uStack_208 = param_2[0xd];
  uStack_210 = param_2[0xc];
  uStack_1f8 = param_2[0xf];
  uStack_200 = param_2[0xe];
  uStack_1f0 = param_2[0x10];
  uStack_248 = param_2[5];
  uStack_250 = param_2[4];
  uStack_238 = param_2[7];
  uStack_240 = param_2[6];
  uStack_228 = param_2[9];
  uStack_230 = param_2[8];
  uStack_218 = param_2[0xb];
  uStack_220 = param_2[10];
  uStack_268 = param_2[1];
  uStack_270 = *param_2;
  uStack_258 = param_2[3];
  uStack_260 = param_2[2];
  puVar4 = &UNK_10db9dbd8;
  func_0x000107c614e0(&UNK_10db9dbd8);
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  iVar3 = (int)&uStack_e0;
  FUN_10320498c();
  if (iVar3 == 1) {
    func_0x000107c61574(puVar4);
    puVar8 = (undefined8 *)0x0;
LAB_10320cbac:
    puVar4 = &UNK_10db9dbf8;
    func_0x000107c614e0(&UNK_10db9dbf8);
    iVar3 = (int)&uStack_e0;
    FUN_10320498c();
    if (iVar3 == 1) {
      func_0x000107c61574(puVar4);
      puVar7 = (undefined8 *)0x0;
      bVar2 = false;
      goto LAB_10320cd14;
    }
    bVar2 = false;
  }
  else {
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_188 = uStack_88;
    uStack_190 = uStack_90;
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    uStack_168 = uStack_68;
    uStack_170 = uStack_70;
    uStack_1d8 = uStack_d8;
    uStack_1e0 = uStack_e0;
    uStack_1c8 = uStack_c8;
    uStack_1d0 = uStack_d0;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1a8 = uStack_a8;
    uStack_1b0 = uStack_b0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    FUN_1032049a4(&uStack_1e0,&uStack_2f0);
    puVar8 = &uStack_160;
    func_0x000103207160(puVar8,&uStack_270,puVar4);
    func_0x000103204ddc(&uStack_e0);
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_10db9dc20;
    func_0x000107c614e0(&UNK_10db9dc20);
    FUN_1032049a4(&uStack_1e0,&uStack_2f0);
    puVar7 = &uStack_160;
    FUN_103207138(puVar7,&uStack_270,puVar4);
    func_0x000103204ddc(&uStack_e0);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar7 & 1) == 0) {
      puVar4 = &UNK_10db9dc40;
      func_0x000107c614e0(&UNK_10db9dc40);
      FUN_1032049a4(&uStack_1e0,&uStack_2f0);
      puVar7 = &uStack_160;
      FUN_103207138(puVar7,&uStack_270,puVar4);
      func_0x000103204ddc(&uStack_e0);
      func_0x000107c61574(puVar4);
      if ((((uint)puVar7 & 0xff) == 2) || (((ulong)puVar7 & 1) == 0)) goto LAB_10320cbac;
      if (puVar8 == (undefined8 *)0x0) {
        bVar2 = false;
      }
      else {
        puVar7 = puVar8;
        func_0x000107c5def0();
        bVar2 = (int)puVar7 == 0x1e;
      }
    }
    else {
      bVar2 = true;
    }
    puVar4 = &UNK_10db9dbf8;
    func_0x000107c614e0(&UNK_10db9dbf8);
  }
  uStack_2a8 = uStack_98;
  uStack_2b0 = uStack_a0;
  uStack_298 = uStack_88;
  uStack_2a0 = uStack_90;
  uStack_288 = uStack_78;
  uStack_290 = uStack_80;
  uStack_278 = uStack_68;
  uStack_280 = uStack_70;
  uStack_2e8 = uStack_d8;
  uStack_2f0 = uStack_e0;
  uStack_2d8 = uStack_c8;
  uStack_2e0 = uStack_d0;
  uStack_2c8 = uStack_b8;
  uStack_2d0 = uStack_c0;
  uStack_2b8 = uStack_a8;
  uStack_2c0 = uStack_b0;
  uStack_1d8 = uStack_d8;
  uStack_1e0 = uStack_e0;
  uStack_1c8 = uStack_c8;
  uStack_1d0 = uStack_d0;
  uStack_1b8 = uStack_b8;
  uStack_1c0 = uStack_c0;
  uStack_1a8 = uStack_a8;
  uStack_1b0 = uStack_b0;
  uStack_178 = uStack_78;
  uStack_180 = uStack_80;
  uStack_168 = uStack_68;
  uStack_170 = uStack_70;
  uStack_198 = uStack_98;
  uStack_1a0 = uStack_a0;
  uStack_188 = uStack_88;
  uStack_190 = uStack_90;
  FUN_1032049a4(&uStack_2f0,auStack_370);
  puVar7 = &uStack_1e0;
  FUN_103207138(puVar7,&uStack_270,puVar4);
  func_0x000103204ddc(&uStack_e0);
  func_0x000107c61574(puVar4);
  if (((uint)puVar7 & 0xff) == 2) {
    puVar7 = (undefined8 *)0x0;
  }
LAB_10320cd14:
  func_0x000107c61174();
  puVar5 = puVar8;
  func_0x000107c5c018();
  func_0x000107c61180();
  if (((ulong)puVar7 & 1) == 0) {
    param_3 = puVar8;
    func_0x000107c5d8c4();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
  }
  else {
    func_0x000107c61170();
    func_0x000107c61174(param_3);
  }
  bVar1 = puVar5 == (undefined8 *)0x0;
  if (bVar1) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = puVar5;
    func_0x000107c5c080();
    func_0x000107c61174();
    puVar6 = puVar5;
    func_0x000107c5c084();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
    puVar5 = puVar6;
  }
  func_0x000107c61170(puVar8);
  *(bool *)param_1 = bVar2;
  *(byte *)(param_1 + 1) = (byte)puVar7 & 1;
  *(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 **)(param_1 + 0x10) = puVar9;
  *(bool *)(param_1 + 0x18) = bVar1;
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  *(bool *)(param_1 + 0x28) = bVar1;
  return;
}



/* Entry: 10320ce58; end: 10320cee3;  */

void FUN_10320ce58(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_10320cb04(&uStack_f0,&uStack_c0,param_2[0x14]);
  *param_1 = uStack_f0;
  param_1[1] = uStack_ef;
  *(undefined8 *)(param_1 + 0x10) = uStack_e0;
  *(undefined8 *)(param_1 + 8) = uStack_e8;
  param_1[0x18] = uStack_d8;
  *(undefined8 *)(param_1 + 0x20) = uStack_d0;
  param_1[0x28] = uStack_c8;
  return;
}



/* Entry: 10320cee4; end: 10320d2b7;  */

bool FUN_10320cee4(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*param_1 != *param_2) {
    return false;
  }
  uVar6 = *(ulong *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  cVar3 = param_1[0x18];
  lVar5 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  cVar4 = param_2[0x18];
  if (uVar6 == 0) {
    if (lVar5 == 0) {
LAB_10320cf84:
      if (cVar3 == '\x01') {
        return cVar4 == '\x01';
      }
      return cVar4 != '\x01' && lVar1 == lVar2;
    }
  }
  else if (lVar5 != 0) {
    FUN_10320d7e0(0,0x112f4c790,&PTR_PTR_1126b2398);
    func_0x000107c61174(lVar5);
    func_0x000107c61174();
    uVar7 = uVar6;
    func_0x000107c60118();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar5);
    if ((uVar7 & 1) != 0) goto LAB_10320cf84;
  }
  return false;
}



/* Entry: 10320d2b8; end: 10320d49f;  */

void FUN_10320d2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_29f;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char cStack_268;
  undefined1 uStack_267;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1af;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_ff;
  
  if (param_5 == -1) {
    func_0x00010320d760(&lStack_1a0);
  }
  else {
    uVar1 = param_2;
    uVar2 = param_3;
    FUN_10320d790();
    func_0x00010320fccc();
    if (param_6 == 0) {
      func_0x0001031e60c4(&lStack_250);
    }
    else {
      lStack_378 = param_6;
      func_0x0001031e60f0(&lStack_378);
      uStack_128 = uStack_300;
      lStack_130 = lStack_308;
      uStack_118 = uStack_2f0;
      uStack_120 = uStack_2f8;
      uStack_110 = uStack_2e8;
      uStack_ff = CONCAT17(uStack_2d0,uStack_2d7);
      uStack_158 = uStack_330;
      uStack_160 = uStack_338;
      uStack_148 = uStack_320;
      uStack_150 = uStack_328;
      uStack_138 = uStack_310;
      uStack_140 = uStack_318;
      uStack_198 = uStack_370;
      lStack_1a0 = lStack_378;
      uStack_188 = uStack_360;
      uStack_190 = uStack_368;
      uStack_178 = uStack_350;
      uStack_180 = uStack_358;
      lStack_168 = lStack_340;
      uStack_170 = uStack_348;
      func_0x0001031e6100(&lStack_1a0);
      uStack_1c8 = uStack_118;
      uStack_1d0 = uStack_120;
      uStack_1c0 = uStack_110;
      uStack_1af = uStack_ff;
      uStack_208 = uStack_158;
      uStack_210 = uStack_160;
      uStack_1f8 = uStack_148;
      uStack_200 = uStack_150;
      uStack_1e8 = uStack_138;
      uStack_1f0 = uStack_140;
      uStack_1d8 = uStack_128;
      lStack_1e0 = lStack_130;
      uStack_248 = uStack_198;
      lStack_250 = lStack_1a0;
      uStack_238 = uStack_188;
      uStack_240 = uStack_190;
      uStack_228 = uStack_178;
      uStack_230 = uStack_180;
      lStack_218 = lStack_168;
      uStack_220 = uStack_170;
    }
    uStack_2c8 = uStack_1d8;
    uStack_2d0 = (undefined1)lStack_1e0;
    uStack_2cf = (undefined7)((ulong)lStack_1e0 >> 8);
    uStack_2b8 = uStack_1c8;
    uStack_2c0 = uStack_1d0;
    uStack_2b0 = uStack_1c0;
    uStack_29f = uStack_1af;
    lStack_308 = lStack_218;
    uStack_310 = uStack_220;
    uStack_2f8 = uStack_208;
    uStack_300 = uStack_210;
    uStack_2e8 = uStack_1f8;
    uStack_2f0 = uStack_200;
    uStack_2d8 = (undefined1)uStack_1e8;
    uStack_2d7 = (undefined7)((ulong)uStack_1e8 >> 8);
    uStack_2e0 = (undefined1)uStack_1f0;
    uStack_2df = (undefined7)((ulong)uStack_1f0 >> 8);
    uStack_338 = uStack_248;
    lStack_340 = lStack_250;
    uStack_328 = uStack_238;
    uStack_330 = uStack_240;
    uStack_318 = uStack_228;
    uStack_320 = uStack_230;
    lStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0x656c69666f7270;
    uStack_360 = 0xe700000000000000;
    uStack_348 = 0;
    uStack_288 = 3;
    uStack_290 = 0;
    uStack_267 = 1;
    uStack_260 = 0;
    uStack_258 = 1;
    uStack_358 = uVar1;
    uStack_350 = uVar2;
    uStack_280 = param_2;
    uStack_278 = param_3;
    uStack_270 = param_4;
    cStack_268 = param_5;
    FUN_10320d7dc(&lStack_378);
    func_0x000107c610b4(&lStack_1a0,&lStack_378,0x128);
    func_0x000107c61174(param_6);
  }
  func_0x000107c610b4(param_1,&lStack_1a0,0x128);
  return;
}



/* Entry: 10320d4a0; end: 10320d4ef;  */

void FUN_10320d4a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_148 [296];
  
  FUN_10320d2b8(auStack_148,*param_2,param_2[1],param_2[2],*(undefined1 *)(param_2 + 3),param_2[4]);
  func_0x000107c610b4(param_1,auStack_148,0x128);
  return;
}



/* Entry: 10320d4f0; end: 10320d4f3;  */

code * FUN_10320d4f0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x0001000a8868();
  (**(code **)(lVar1 + 8))(param_1,uVar2,lVar1);
  uVar2 = 0x112f4c7b0;
  func_0x0001000285a8(0x112f4c7b0,&UNK_10db9db50);
  uVar3 = 0x10320c6a0;
  func_0x0001000bfde0(0x10320c6a0,0,uVar2);
  uVar2 = 0x10320c774;
  func_0x00010487de38(0x10320c774,0);
  func_0x000107c61574(uVar3);
  uVar3 = 0x112f4c7b8;
  func_0x0001000285a8(0x112f4c7b8,&UNK_10db9db58);
  pcVar4 = FUN_10320c89c;
  func_0x0001000bfde0(FUN_10320c89c,0,uVar3);
  func_0x000107c61574(uVar2);
  pcVar5 = pcVar4;
  func_0x0001006c733c(pcVar4);
  uVar2 = 0x112f4c7c0;
  func_0x0001000285a8(0x112f4c7c0,&UNK_10db9db60);
  pcVar6 = FUN_10320ce58;
  func_0x0001000bfde0(FUN_10320ce58,0,uVar2);
  func_0x000107c61574(pcVar5);
  pcVar5 = FUN_10320cee4;
  func_0x00010487de38(FUN_10320cee4,0);
  func_0x000107c61574(pcVar6);
  uVar2 = 0x112f4c7c8;
  func_0x0001000285a8(0x112f4c7c8,&UNK_10db9db68);
  uVar3 = 0x10320cfc0;
  func_0x0001000bfde0(0x10320cfc0,0,uVar2);
  func_0x000107c61574(pcVar5);
  uVar7 = param_1;
  func_0x0001006c733c(param_1);
  func_0x000107c61574(uVar3);
  uVar2 = 0x112f4c7d0;
  func_0x0001000285a8(0x112f4c7d0,&UNK_10db9db70);
  pcVar6 = FUN_10320d4a0;
  func_0x0001000bfde0(FUN_10320d4a0,0,uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar7);
  return pcVar6;
}



/* Entry: 10320d4f4; end: 10320d517;  */

void FUN_10320d4f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10320d518();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10320d518; end: 10320d557;  */

void FUN_10320d518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c7d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9dba0;
  func_0x000107c61520(&DAT_10db9dba0,&UNK_110625bf0);
  puRam0000000112f4c7d8 = puVar1;
  return;
}



/* Entry: 10320d558; end: 10320d55b;  */

void FUN_10320d558(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c7e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c7e8;
  func_0x00010002969c(0x112f4c7e8,&UNK_10db9db98);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c7e0 = puVar2;
  return;
}



/* Entry: 10320d55c; end: 10320d5ab;  */

void FUN_10320d55c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c7e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c7e8;
  func_0x00010002969c(0x112f4c7e8,&UNK_10db9db98);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c7e0 = puVar2;
  return;
}



/* Entry: 10320d5ac; end: 10320d5c3;  */

undefined ** FUN_10320d5ac(void)

{
  return &PTR_DAT_110624d30;
}



/* Entry: 10320d5c4; end: 10320d5fb;  */

undefined * FUN_10320d5c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_10320338c();
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



/* Entry: 10320d5fc; end: 10320d627;  */

long FUN_10320d5fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10320d628; end: 10320d62b;  */

void FUN_10320d628(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10320d62c; end: 10320d6bf;  */

long FUN_10320d62c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  return param_1;
}



/* Entry: 10320d6c0; end: 10320d78f;  */

int FUN_10320d6c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10320d790; end: 10320d7db;  */

/* WARNING: Possible PIC construction at 0x00010320d7c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010320d7c8) */

void FUN_10320d790(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 != '\x02') && (param_2 = param_1, param_4 != '\x01')) {
    if (param_4 != '\0') {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10320d7dc; end: 10320d7df;  */

void FUN_10320d7dc(void)

{
  return;
}



/* Entry: 10320d7e0; end: 10320d81f;  */

void FUN_10320d7e0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10320d820; end: 10320d833;  */

bool FUN_10320d820(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10320d834; end: 10320d947;  */

void FUN_10320d834(void)

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



/* Entry: 10320d948; end: 10320d987;  */

void FUN_10320d948(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9dd54;
  func_0x000107c61520(&UNK_10db9dd54,&UNK_110625cd0);
  puRam0000000112f4c830 = puVar1;
  return;
}



/* Entry: 10320d988; end: 10320dd6b;  */

void FUN_10320d988(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
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
  undefined8 uStack_23f;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_157;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
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
  
  if (*param_2 == '\0') {
    func_0x00010320e078(&puStack_230);
  }
  else {
    if (*param_2 == '\x01') {
      puVar3 = (undefined8 *)PTR_PTR_1126b0c40;
      func_0x000107c61168();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168();
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c45098(0x4038000000000000,0x4038000000000000);
      func_0x000107c61180();
      func_0x000107c61170();
      FUN_10320fcec();
      if (puVar3 == (undefined8 *)0x0) {
        func_0x0001031e60c4(&puStack_100);
      }
      else {
        puStack_2e0 = puVar3;
        func_0x0001031e60f0(&puStack_2e0);
        uStack_1a8 = uStack_258;
        uStack_1b0 = uStack_260;
        uStack_1a0 = uStack_250;
        uStack_18f = (undefined7)uStack_23f;
        uStack_188 = (undefined1)((ulong)uStack_23f >> 0x38);
        uStack_1e8 = uStack_298;
        uStack_1f0 = uStack_2a0;
        puStack_1d8 = (undefined *)uStack_288;
        uStack_1e0 = uStack_290;
        uStack_1c8 = uStack_278;
        uStack_1d0 = uStack_280;
        uStack_1b8 = uStack_268;
        uStack_1c0 = uStack_270;
        uStack_228 = uStack_2d8;
        puStack_230 = puStack_2e0;
        uStack_218 = uStack_2c8;
        uStack_220 = uStack_2d0;
        uStack_208 = uStack_2b8;
        puStack_210 = puStack_2c0;
        puStack_1f8 = (undefined8 *)uStack_2a8;
        uStack_200 = uStack_2b0;
        func_0x0001031e6100(&puStack_230);
        uStack_78 = uStack_1a8;
        uStack_80 = uStack_1b0;
        uStack_70 = uStack_1a0;
        uStack_5f = CONCAT17(uStack_188,uStack_18f);
        uStack_b8 = uStack_1e8;
        uStack_c0 = uStack_1f0;
        uStack_a8 = puStack_1d8;
        uStack_b0 = uStack_1e0;
        uStack_98 = uStack_1c8;
        uStack_a0 = uStack_1d0;
        uStack_88 = uStack_1b8;
        uStack_90 = uStack_1c0;
        uStack_f8 = uStack_228;
        puStack_100 = puStack_230;
        uStack_e8 = uStack_218;
        uStack_f0 = uStack_220;
        uStack_d8 = uStack_208;
        puStack_e0 = puStack_210;
        uStack_c8 = puStack_1f8;
        uStack_d0 = uStack_200;
      }
      uStack_180 = uStack_88;
      uStack_188 = (undefined1)uStack_90;
      uStack_187 = (undefined7)((ulong)uStack_90 >> 8);
      uStack_170 = uStack_78;
      uStack_178 = uStack_80;
      uStack_168 = uStack_70;
      uStack_157 = uStack_5f;
      uStack_1c0 = uStack_c8;
      uStack_1c8 = uStack_d0;
      uStack_1b0 = uStack_b8;
      uStack_1b8 = uStack_c0;
      uStack_1a0 = uStack_a8;
      uStack_1a8 = uStack_b0;
      uStack_190 = (undefined1)uStack_98;
      uStack_18f = (undefined7)((ulong)uStack_98 >> 8);
      uStack_198 = (undefined1)uStack_a0;
      uStack_197 = (undefined7)((ulong)uStack_a0 >> 8);
      uStack_1f0 = uStack_f8;
      puStack_1f8 = puStack_100;
      uStack_1e0 = uStack_e8;
      uStack_1e8 = uStack_f0;
      uStack_1d0 = uStack_d8;
      puStack_1d8 = puStack_e0;
      func_0x000107c61174();
      puVar6 = puVar3;
      func_0x000103bb42ac();
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      func_0x000101c68d90(0);
      func_0x000107c61434(uVar2);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5ff4c();
      func_0x000107c61170(puVar3);
      uStack_140 = 0;
      uStack_120 = 0x302;
      uStack_110 = 2;
      puStack_210 = puVar4;
      uStack_208 = param_3;
      uStack_138 = uVar1;
      uStack_130 = uVar2;
      puStack_128 = puVar5;
    }
    else {
      puVar3 = (undefined8 *)PTR_PTR_1126b0c40;
      func_0x000107c61168();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c45098(0x4038000000000000,0x4038000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar3 == (undefined8 *)0x0) {
        func_0x0001031e60c4(&puStack_100);
      }
      else {
        puStack_2e0 = puVar3;
        func_0x0001031e60f0(&puStack_2e0);
        uStack_1a8 = uStack_258;
        uStack_1b0 = uStack_260;
        uStack_1a0 = uStack_250;
        uStack_18f = (undefined7)uStack_23f;
        uStack_188 = (undefined1)((ulong)uStack_23f >> 0x38);
        uStack_1e8 = uStack_298;
        uStack_1f0 = uStack_2a0;
        puStack_1d8 = (undefined *)uStack_288;
        uStack_1e0 = uStack_290;
        uStack_1c8 = uStack_278;
        uStack_1d0 = uStack_280;
        uStack_1b8 = uStack_268;
        uStack_1c0 = uStack_270;
        uStack_228 = uStack_2d8;
        puStack_230 = puStack_2e0;
        uStack_218 = uStack_2c8;
        uStack_220 = uStack_2d0;
        uStack_208 = uStack_2b8;
        puStack_210 = puStack_2c0;
        puStack_1f8 = (undefined8 *)uStack_2a8;
        uStack_200 = uStack_2b0;
        func_0x0001031e6100(&puStack_230);
        uStack_78 = uStack_1a8;
        uStack_80 = uStack_1b0;
        uStack_70 = uStack_1a0;
        uStack_5f = CONCAT17(uStack_188,uStack_18f);
        uStack_b8 = uStack_1e8;
        uStack_c0 = uStack_1f0;
        uStack_a8 = puStack_1d8;
        uStack_b0 = uStack_1e0;
        uStack_98 = uStack_1c8;
        uStack_a0 = uStack_1d0;
        uStack_88 = uStack_1b8;
        uStack_90 = uStack_1c0;
        uStack_f8 = uStack_228;
        puStack_100 = puStack_230;
        uStack_e8 = uStack_218;
        uStack_f0 = uStack_220;
        uStack_d8 = uStack_208;
        puStack_e0 = puStack_210;
        uStack_c8 = puStack_1f8;
        uStack_d0 = uStack_200;
      }
      uStack_180 = uStack_88;
      uStack_188 = (undefined1)uStack_90;
      uStack_187 = (undefined7)((ulong)uStack_90 >> 8);
      uStack_170 = uStack_78;
      uStack_178 = uStack_80;
      uStack_168 = uStack_70;
      uStack_157 = uStack_5f;
      uStack_1c0 = uStack_c8;
      uStack_1c8 = uStack_d0;
      uStack_1b0 = uStack_b8;
      uStack_1b8 = uStack_c0;
      uStack_1a0 = uStack_a8;
      uStack_1a8 = uStack_b0;
      uStack_190 = (undefined1)uStack_98;
      uStack_18f = (undefined7)((ulong)uStack_98 >> 8);
      uStack_198 = (undefined1)uStack_a0;
      uStack_197 = (undefined7)((ulong)uStack_a0 >> 8);
      uStack_1f0 = uStack_f8;
      puStack_1f8 = puStack_100;
      uStack_1e0 = uStack_e8;
      uStack_1e8 = uStack_f0;
      uStack_1d0 = uStack_d8;
      puStack_1d8 = puStack_e0;
      func_0x000107c61174();
      puVar6 = puVar3;
      func_0x000103bb42ac();
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      func_0x000101c68d90(0);
      func_0x000107c61434(uVar2);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5ff4c();
      func_0x000107c61170(puVar3);
      puStack_210 = (undefined *)0x0;
      uStack_208 = 0xe000000000000000;
      uStack_140 = 1;
      uStack_120 = 0x102;
      uStack_110 = 1;
      uStack_138 = uVar1;
      uStack_130 = uVar2;
      puStack_128 = puVar4;
    }
    uStack_148 = 0;
    uStack_200 = 0;
    uStack_218 = 0x800000010f131200;
    uStack_220 = 0xd000000000000010;
    uStack_228 = 0;
    puStack_230 = (undefined8 *)0x0;
    uStack_118 = 0;
    func_0x00010320e074(&puStack_230);
  }
  func_0x000107c610b4(param_1,&puStack_230,0x128);
  return;
}



/* Entry: 10320dd6c; end: 10320de17;  */

code * FUN_10320dd6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = 0x10320d8e0;
  func_0x0001000bfde0(0x10320d8e0,0,&UNK_110625cd0);
  uVar2 = uVar1;
  FUN_10320d948();
  func_0x0001000c2068();
  func_0x000107c61574(uVar1);
  uVar1 = 0x112f4c838;
  func_0x0001000285a8(0x112f4c838,&UNK_10db9dc80);
  pcVar3 = FUN_10320d988;
  func_0x0001000bfde0(FUN_10320d988,0,uVar1);
  func_0x000107c61574(uVar2);
  return pcVar3;
}



/* Entry: 10320de18; end: 10320de57;  */

void FUN_10320de18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9dcb0;
  func_0x000107c61520(&DAT_10db9dcb0,&UNK_110625c40);
  puRam0000000112f4c840 = puVar1;
  return;
}



/* Entry: 10320de58; end: 10320de5b;  */

void FUN_10320de58(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c848 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c850;
  func_0x00010002969c(0x112f4c850,&UNK_10db9dca8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c848 = puVar2;
  return;
}



/* Entry: 10320de5c; end: 10320deab;  */

void FUN_10320de5c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c848 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c850;
  func_0x00010002969c(0x112f4c850,&UNK_10db9dca8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c848 = puVar2;
  return;
}



/* Entry: 10320deac; end: 10320dec3;  */

undefined ** FUN_10320deac(void)

{
  return &PTR_DAT_11062dbb8;
}



/* Entry: 10320dec4; end: 10320defb;  */

undefined * FUN_10320dec4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x0001032033cc();
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



/* Entry: 10320defc; end: 10320e0a7;  */

undefined1  [16] FUN_10320defc(void)

{
  return ZEXT816(0x110625c40);
}



/* Entry: 10320e0a8; end: 10320e117;  */

undefined8 FUN_10320e0a8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5d9c0();
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10320e118; end: 10320e37b;  */

code * FUN_10320e118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *apuStack_90 [3];
  undefined8 uStack_78;
  long lStack_70;
  
  ppuVar4 = apuStack_90;
  puVar1 = &UNK_10db9dd80;
  func_0x000107c614e0();
  puVar2 = &UNK_10db9dda0;
  apuStack_90[0] = puVar1;
  func_0x000107c614e0(&UNK_10db9dda0,apuStack_90);
  pcVar3 = FUN_10320e4b4;
  func_0x0001000d5158(FUN_10320e4b4,puVar2,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar2);
  apuStack_90[0] = (undefined *)((ulong)apuStack_90[0] & 0xffffffffffffff00);
  func_0x0001006c71a4(apuStack_90);
  func_0x000107c61574(pcVar3);
  puVar5 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(ppuVar4);
  puVar1 = &UNK_110625d58;
  func_0x000107c613fc(&UNK_110625d58,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar6 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  uVar7 = 0x112f4c898;
  func_0x0001000285a8(0x112f4c898,&UNK_10db9ddf0);
  pcVar3 = FUN_10320e8ec;
  func_0x0001000bfde0(FUN_10320e8ec,puVar1,uVar7);
  func_0x000107c61574(puVar1);
  FUN_10320e8f8();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar3);
  func_0x0001000d224c(apuStack_90);
  func_0x0001000a8868(apuStack_90,uStack_78);
  uVar7 = 0x16;
  (**(code **)(lStack_70 + 8))(0x16,uStack_78,lStack_70);
  uVar8 = uVar7;
  func_0x00010061da28();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar7);
  func_0x0001000834e4(apuStack_90);
  puVar1 = &UNK_110625d80;
  func_0x000107c613fc(&UNK_110625d80,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  puVar2 = &UNK_110625da8;
  func_0x000107c613fc(&UNK_110625da8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_10320f064;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar6);
  uVar7 = 0x112f4bfd8;
  func_0x0001000285a8(0x112f4bfd8,&UNK_10db9c310);
  pcVar3 = FUN_10320f070;
  func_0x0001000bfde0(FUN_10320f070,puVar2,uVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar2);
  return pcVar3;
}



/* Entry: 10320e37c; end: 10320e3fb;  */

void FUN_10320e37c(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar3 = *param_3;
    uVar4 = param_2[2];
    uVar5 = *param_2;
    func_0x000107c61434(lVar1);
    FUN_103206fe4(uVar5,lVar1,uVar4,uVar3);
    uVar2 = (undefined1)uVar5;
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 10320e3fc; end: 10320e4b3;  */

void FUN_10320e3fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_210 [160];
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_108 = param_2[0xd];
  uStack_110 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_118 = param_2[0xb];
  uStack_120 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_f8 = param_2[0xf];
  uStack_100 = param_2[0xe];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_e8 = param_2[0x11];
  uStack_f0 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_148 = param_2[5];
  uStack_150 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_158 = param_2[3];
  uStack_160 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_138 = param_2[7];
  uStack_140 = param_2[6];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_128 = param_2[9];
  uStack_130 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  uStack_d8 = param_2[0x13];
  uStack_e0 = param_2[0x12];
  func_0x00010320f7b4(&uStack_d0,auStack_210);
  func_0x000107c614bc(param_1,&uStack_170,param_3);
  func_0x00010320f804(&uStack_170,0x112f4c900,&UNK_10db9df30);
  return;
}



/* Entry: 10320e4b4; end: 10320e4bb;  */

void FUN_10320e4b4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_210 [160];
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_108 = param_2[0xd];
  uStack_110 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_118 = param_2[0xb];
  uStack_120 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_f8 = param_2[0xf];
  uStack_100 = param_2[0xe];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_e8 = param_2[0x11];
  uStack_f0 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_148 = param_2[5];
  uStack_150 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_158 = param_2[3];
  uStack_160 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_138 = param_2[7];
  uStack_140 = param_2[6];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_128 = param_2[9];
  uStack_130 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  uStack_d8 = param_2[0x13];
  uStack_e0 = param_2[0x12];
  func_0x00010320f7b4(&uStack_d0,auStack_210);
  func_0x000107c614bc(param_1,&uStack_170);
  func_0x00010320f804(&uStack_170,0x112f4c900,&UNK_10db9df30);
  return;
}



/* Entry: 10320e4bc; end: 10320e8eb;  */

void FUN_10320e4bc(byte *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *apuStack_400 [2];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  byte bStack_3b8;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
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
  undefined8 uStack_258;
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
  undefined8 uStack_68;
  
  uStack_208 = param_2[0xd];
  uStack_210 = param_2[0xc];
  uStack_1f8 = param_2[0xf];
  uStack_200 = param_2[0xe];
  uStack_1f0 = param_2[0x10];
  uStack_248 = param_2[5];
  uStack_250 = param_2[4];
  uStack_238 = param_2[7];
  uStack_240 = param_2[6];
  uStack_228 = param_2[9];
  uStack_230 = param_2[8];
  uStack_218 = param_2[0xb];
  uStack_220 = param_2[10];
  uStack_268 = param_2[1];
  uStack_270 = *param_2;
  uStack_258 = param_2[3];
  uStack_260 = param_2[2];
  puVar2 = &UNK_10db9dec8;
  func_0x000107c614e0(&UNK_10db9dec8);
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  iVar1 = (int)&uStack_e0;
  func_0x000103208064();
  if (iVar1 == 1) {
    func_0x000107c61574(puVar2);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_188 = uStack_88;
    uStack_190 = uStack_90;
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    uStack_168 = uStack_68;
    uStack_170 = uStack_70;
    uStack_1d8 = uStack_d8;
    uStack_1e0 = uStack_e0;
    uStack_1c8 = uStack_c8;
    uStack_1d0 = uStack_d0;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1a8 = uStack_a8;
    uStack_1b0 = uStack_b0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    FUN_10320807c(&uStack_1e0,&uStack_2f0);
    puVar4 = &uStack_160;
    FUN_103206b78(puVar4,&uStack_270,puVar2);
    func_0x00010320f804(&uStack_e0,0x112f4c630,&UNK_10db9d618);
    func_0x000107c61574(puVar2);
    if (puVar4 != (undefined8 *)0x0) {
      puVar3 = puVar4;
      func_0x000107c3ebcc();
      func_0x000107c61170(puVar4);
      if (((ulong)puVar3 & 1) != 0) goto LAB_10320e6b4;
    }
    puVar2 = &UNK_10db9dee8;
    func_0x000107c614e0(&UNK_10db9dee8);
    FUN_10320807c(&uStack_1e0,&uStack_2f0);
    puVar4 = &uStack_160;
    func_0x000103207174(puVar4,&uStack_270,puVar2);
    func_0x00010320f804(&uStack_e0,0x112f4c630,&UNK_10db9d618);
    func_0x000107c61574(puVar2);
  }
  puVar2 = PTR_PTR_1126c3320;
  func_0x000107c61168();
  iVar1 = (int)puVar2;
  puVar3 = puVar4;
  func_0x000107c5c018();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c5c058();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c49d54();
  func_0x000107c61170();
  if (iVar1 != 0) {
LAB_10320e6b4:
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0x30] = 1;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    return;
  }
  FUN_1032077b4();
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    puVar2 = &UNK_10db9df10;
    func_0x000107c614e0(&UNK_10db9df10);
    iVar1 = (int)&uStack_e0;
    func_0x000103208064();
    if (iVar1 == 1) {
      func_0x000107c61574(puVar2);
    }
    else {
      uStack_2a8 = uStack_98;
      uStack_2b0 = uStack_a0;
      uStack_298 = uStack_88;
      uStack_2a0 = uStack_90;
      uStack_288 = uStack_78;
      uStack_290 = uStack_80;
      uStack_278 = uStack_68;
      uStack_280 = uStack_70;
      uStack_2e8 = uStack_d8;
      uStack_2f0 = uStack_e0;
      uStack_2d8 = uStack_c8;
      uStack_2e0 = uStack_d0;
      uStack_2c8 = uStack_b8;
      uStack_2d0 = uStack_c0;
      uStack_2b8 = uStack_a8;
      uStack_2c0 = uStack_b0;
      uStack_1d8 = uStack_d8;
      uStack_1e0 = uStack_e0;
      uStack_1c8 = uStack_c8;
      uStack_1d0 = uStack_d0;
      uStack_1b8 = uStack_b8;
      uStack_1c0 = uStack_c0;
      uStack_1a8 = uStack_a8;
      uStack_1b0 = uStack_b0;
      uStack_178 = uStack_78;
      uStack_180 = uStack_80;
      uStack_168 = uStack_68;
      uStack_170 = uStack_70;
      uStack_198 = uStack_98;
      uStack_1a0 = uStack_a0;
      uStack_188 = uStack_88;
      uStack_190 = uStack_90;
      FUN_10320807c(&uStack_2f0,&uStack_370);
      puVar4 = &uStack_1e0;
      func_0x00010320714c(puVar4,&uStack_270,puVar2);
      func_0x00010320f804(&uStack_e0,0x112f4c630,&UNK_10db9d618);
      func_0x000107c61574(puVar2);
      if (((uint)puVar4 & 0xff) != 2) {
        uVar5 = (uint)puVar4 ^ 1;
        goto LAB_10320e798;
      }
    }
    uVar5 = 1;
  }
LAB_10320e798:
  puVar2 = &UNK_10db9dee8;
  func_0x000107c614e0(&UNK_10db9dee8);
  iVar1 = (int)&uStack_e0;
  func_0x000103208064();
  if (iVar1 == 1) {
    func_0x000107c61574(puVar2);
  }
  else {
    uStack_328 = uStack_98;
    uStack_330 = uStack_a0;
    uStack_318 = uStack_88;
    uStack_320 = uStack_90;
    uStack_308 = uStack_78;
    uStack_310 = uStack_80;
    uStack_2f8 = uStack_68;
    uStack_300 = uStack_70;
    uStack_368 = uStack_d8;
    uStack_370 = uStack_e0;
    uStack_358 = uStack_c8;
    uStack_360 = uStack_d0;
    uStack_348 = uStack_b8;
    uStack_350 = uStack_c0;
    uStack_338 = uStack_a8;
    uStack_340 = uStack_b0;
    uStack_2e8 = uStack_d8;
    uStack_2f0 = uStack_e0;
    uStack_2d8 = uStack_c8;
    uStack_2e0 = uStack_d0;
    uStack_2c8 = uStack_b8;
    uStack_2d0 = uStack_c0;
    uStack_2b8 = uStack_a8;
    uStack_2c0 = uStack_b0;
    uStack_288 = uStack_78;
    uStack_290 = uStack_80;
    uStack_278 = uStack_68;
    uStack_280 = uStack_70;
    uStack_2a8 = uStack_98;
    uStack_2b0 = uStack_a0;
    uStack_298 = uStack_88;
    uStack_2a0 = uStack_90;
    FUN_10320807c(&uStack_370,&uStack_3f0);
    puVar4 = &uStack_2f0;
    func_0x000103207174(puVar4,&uStack_270,puVar2);
    func_0x00010320f804(&uStack_e0,0x112f4c630,&UNK_10db9d618);
    func_0x000107c61574(puVar2);
    if (puVar4 != (undefined8 *)0x0) {
      apuStack_400[0] = puVar4;
      func_0x000107c61174(puVar4);
      FUN_10320e9a8(&uStack_3f0,apuStack_400,param_3,param_4,param_5,param_6,uVar5 & 1);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      if (lStack_3c0 != 1) {
        *(undefined8 *)(param_1 + 8) = uStack_3e8;
        *(undefined8 *)param_1 = uStack_3f0;
        *(undefined8 *)(param_1 + 0x18) = uStack_3d8;
        *(undefined8 *)(param_1 + 0x10) = uStack_3e0;
        *(undefined8 *)(param_1 + 0x28) = uStack_3c8;
        *(undefined8 *)(param_1 + 0x20) = uStack_3d0;
        goto LAB_10320e8ac;
      }
    }
  }
  lStack_3c0 = 0;
  bStack_3b8 = 0;
  *param_1 = (byte)uVar5 & 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 1;
  param_1[0x21] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
LAB_10320e8ac:
  *(long *)(param_1 + 0x30) = lStack_3c0;
  param_1[0x38] = bStack_3b8;
  return;
}



/* Entry: 10320e8ec; end: 10320e8f7;  */

void FUN_10320e8ec(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  uint uVar9;
  undefined8 *apuStack_400 [2];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  byte bStack_3b8;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
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
  undefined8 uStack_258;
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
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_208 = param_2[0xd];
  uStack_210 = param_2[0xc];
  uStack_1f8 = param_2[0xf];
  uStack_200 = param_2[0xe];
  uStack_1f0 = param_2[0x10];
  uStack_248 = param_2[5];
  uStack_250 = param_2[4];
  uStack_238 = param_2[7];
  uStack_240 = param_2[6];
  uStack_228 = param_2[9];
  uStack_230 = param_2[8];
  uStack_218 = param_2[0xb];
  uStack_220 = param_2[10];
  uStack_268 = param_2[1];
  uStack_270 = *param_2;
  uStack_258 = param_2[3];
  uStack_260 = param_2[2];
  puVar6 = &UNK_10db9dec8;
  func_0x000107c614e0(&UNK_10db9dec8);
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  iVar5 = (int)&uStack_e0;
  func_0x000103208064();
  if (iVar5 == 1) {
    func_0x000107c61574(puVar6);
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_188 = uStack_88;
    uStack_190 = uStack_90;
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    uStack_168 = uStack_68;
    uStack_170 = uStack_70;
    uStack_1d8 = uStack_d8;
    uStack_1e0 = uStack_e0;
    uStack_1c8 = uStack_c8;
    uStack_1d0 = uStack_d0;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1a8 = uStack_a8;
    uStack_1b0 = uStack_b0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    FUN_10320807c(&uStack_1e0,&uStack_2f0);
    puVar8 = &uStack_160;
    FUN_103206b78(puVar8,&uStack_270,puVar6);
    func_0x00010320f804(&uStack_e0,0x112f4c630,&UNK_10db9d618);
    func_0x000107c61574(puVar6);
    if (puVar8 != (undefined8 *)0x0) {
      puVar7 = puVar8;
      func_0x000107c3ebcc();
      func_0x000107c61170(puVar8);
      if (((ulong)puVar7 & 1) != 0) goto LAB_10320e6b4;
    }
    puVar6 = &UNK_10db9dee8;
    func_0x000107c614e0(&UNK_10db9dee8);
    FUN_10320807c(&uStack_1e0,&uStack_2f0);
    puVar8 = &uStack_160;
    func_0x000103207174(puVar8,&uStack_270,puVar6);
    func_0x00010320f804(&uStack_e0,0x112f4c630,&UNK_10db9d618);
    func_0x000107c61574(puVar6);
  }
  puVar6 = PTR_PTR_1126c3320;
  func_0x000107c61168();
  iVar5 = (int)puVar6;
  puVar7 = puVar8;
  func_0x000107c5c018();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = puVar7;
  func_0x000107c5c058();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c49d54();
  func_0x000107c61170();
  if (iVar5 != 0) {
LAB_10320e6b4:
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0x30] = 1;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    return;
  }
  FUN_1032077b4();
  if (((ulong)puVar8 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    puVar6 = &UNK_10db9df10;
    func_0x000107c614e0(&UNK_10db9df10);
    iVar5 = (int)&uStack_e0;
    func_0x000103208064();
    if (iVar5 == 1) {
      func_0x000107c61574(puVar6);
    }
    else {
      uStack_2a8 = uStack_98;
      uStack_2b0 = uStack_a0;
      uStack_298 = uStack_88;
      uStack_2a0 = uStack_90;
      uStack_288 = uStack_78;
      uStack_290 = uStack_80;
      uStack_278 = uStack_68;
      uStack_280 = uStack_70;
      uStack_2e8 = uStack_d8;
      uStack_2f0 = uStack_e0;
      uStack_2d8 = uStack_c8;
      uStack_2e0 = uStack_d0;
      uStack_2c8 = uStack_b8;
      uStack_2d0 = uStack_c0;
      uStack_2b8 = uStack_a8;
      uStack_2c0 = uStack_b0;
      uStack_1d8 = uStack_d8;
      uStack_1e0 = uStack_e0;
      uStack_1c8 = uStack_c8;
      uStack_1d0 = uStack_d0;
      uStack_1b8 = uStack_b8;
      uStack_1c0 = uStack_c0;
      uStack_1a8 = uStack_a8;
      uStack_1b0 = uStack_b0;
      uStack_178 = uStack_78;
      uStack_180 = uStack_80;
      uStack_168 = uStack_68;
      uStack_170 = uStack_70;
      uStack_198 = uStack_98;
      uStack_1a0 = uStack_a0;
      uStack_188 = uStack_88;
      uStack_190 = uStack_90;
      FUN_10320807c(&uStack_2f0,&uStack_370);
      puVar8 = &uStack_1e0;
      func_0x00010320714c(puVar8,&uStack_270,puVar6);
      func_0x00010320f804(&uStack_e0,0x112f4c630,&UNK_10db9d618);
      func_0x000107c61574(puVar6);
      if (((uint)puVar8 & 0xff) != 2) {
        uVar9 = (uint)puVar8 ^ 1;
        goto LAB_10320e798;
      }
    }
    uVar9 = 1;
  }
LAB_10320e798:
  puVar6 = &UNK_10db9dee8;
  func_0x000107c614e0(&UNK_10db9dee8);
  iVar5 = (int)&uStack_e0;
  func_0x000103208064();
  if (iVar5 == 1) {
    func_0x000107c61574(puVar6);
  }
  else {
    uStack_328 = uStack_98;
    uStack_330 = uStack_a0;
    uStack_318 = uStack_88;
    uStack_320 = uStack_90;
    uStack_308 = uStack_78;
    uStack_310 = uStack_80;
    uStack_2f8 = uStack_68;
    uStack_300 = uStack_70;
    uStack_368 = uStack_d8;
    uStack_370 = uStack_e0;
    uStack_358 = uStack_c8;
    uStack_360 = uStack_d0;
    uStack_348 = uStack_b8;
    uStack_350 = uStack_c0;
    uStack_338 = uStack_a8;
    uStack_340 = uStack_b0;
    uStack_2e8 = uStack_d8;
    uStack_2f0 = uStack_e0;
    uStack_2d8 = uStack_c8;
    uStack_2e0 = uStack_d0;
    uStack_2c8 = uStack_b8;
    uStack_2d0 = uStack_c0;
    uStack_2b8 = uStack_a8;
    uStack_2c0 = uStack_b0;
    uStack_288 = uStack_78;
    uStack_290 = uStack_80;
    uStack_278 = uStack_68;
    uStack_280 = uStack_70;
    uStack_2a8 = uStack_98;
    uStack_2b0 = uStack_a0;
    uStack_298 = uStack_88;
    uStack_2a0 = uStack_90;
    FUN_10320807c(&uStack_370,&uStack_3f0);
    puVar8 = &uStack_2f0;
    func_0x000103207174(puVar8,&uStack_270,puVar6);
    func_0x00010320f804(&uStack_e0,0x112f4c630,&UNK_10db9d618);
    func_0x000107c61574(puVar6);
    if (puVar8 != (undefined8 *)0x0) {
      apuStack_400[0] = puVar8;
      func_0x000107c61174(puVar8);
      FUN_10320e9a8(&uStack_3f0,apuStack_400,uVar1,uVar3,uVar2,uVar4,uVar9 & 1);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar8);
      if (lStack_3c0 != 1) {
        *(undefined8 *)(param_1 + 8) = uStack_3e8;
        *(undefined8 *)param_1 = uStack_3f0;
        *(undefined8 *)(param_1 + 0x18) = uStack_3d8;
        *(undefined8 *)(param_1 + 0x10) = uStack_3e0;
        *(undefined8 *)(param_1 + 0x28) = uStack_3c8;
        *(undefined8 *)(param_1 + 0x20) = uStack_3d0;
        goto LAB_10320e8ac;
      }
    }
  }
  lStack_3c0 = 0;
  bStack_3b8 = 0;
  *param_1 = (byte)uVar9 & 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 1;
  param_1[0x21] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
LAB_10320e8ac:
  *(long *)(param_1 + 0x30) = lStack_3c0;
  param_1[0x38] = bStack_3b8;
  return;
}



/* Entry: 10320e8f8; end: 10320e967;  */

void FUN_10320e8f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4c8a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c898;
  func_0x00010002969c(0x112f4c898,&UNK_10db9ddf0);
  uVar2 = uVar1;
  FUN_10320e968();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f4c8a0 = puVar3;
  return;
}



/* Entry: 10320e968; end: 10320e9a7;  */

void FUN_10320e968(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c8a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9de8c;
  func_0x000107c61520(&UNK_10db9de8c,&UNK_110625ec8);
  puRam0000000112f4c8a8 = puVar1;
  return;
}



/* Entry: 10320e9a8; end: 10320ebaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10320e9a8(byte *param_1,long *param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,byte param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_80;
  
  lVar7 = *param_2;
  lVar1 = lVar7;
  func_0x000107c4ab80();
  lVar2 = lVar7;
  func_0x00010843715c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uStack_80 = 0;
  }
  else {
    uStack_80 = *(undefined8 *)(lVar2 + _DAT_11307fe28);
  }
  lVar3 = lVar7;
  func_0x000108437064();
  lVar8 = lVar7;
  func_0x000107c5d8c4();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar4 = lVar8;
    func_0x000107c42120();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar4 != 0) {
      lVar8 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      goto joined_r0x00010320ea90;
    }
  }
  lVar8 = 0;
  param_3 = 0;
joined_r0x00010320ea90:
  if (((int)lVar3 != 0) && (lVar4 = lVar7, func_0x000108436674(), (int)lVar4 != 0)) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_5 != 0) {
      lVar4 = lVar7;
      lVar5 = param_5;
      func_0x0001084367a0();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c615e8(param_5);
      }
      else {
        lVar8 = lVar4;
        func_0x000107c5faec();
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(param_5);
        func_0x000107c6142c(param_3);
        param_3 = lVar5;
      }
    }
  }
  func_0x000107c5def0();
  bVar6 = 0;
  if (((int)lVar7 == 0x65) && (param_6 != 0)) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_6 == 0) {
      bVar6 = 0;
    }
    else {
      lVar7 = param_6;
      func_0x000107c4d174();
      bVar6 = (byte)lVar7;
      func_0x000107c615e8(param_6);
    }
  }
  func_0x000107c61170(lVar2);
  *param_1 = param_7 & 1;
  *(undefined8 *)(param_1 + 8) = uStack_80;
  param_1[0x10] = lVar2 == 0;
  *(long *)(param_1 + 0x18) = lVar1;
  param_1[0x20] = 0;
  param_1[0x21] = (byte)lVar3;
  *(long *)(param_1 + 0x28) = lVar8;
  *(long *)(param_1 + 0x30) = param_3;
  param_1[0x38] = bVar6;
  return;
}



/* Entry: 10320ebb0; end: 10320f02f;  */

void FUN_10320ebb0(undefined8 param_1,uint *param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  long lVar30;
  undefined8 uVar31;
  undefined *puVar32;
  ulong uVar33;
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_29f;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined2 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1af;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_ff;
  
  puVar32 = *(undefined **)(param_2 + 0xc);
  if (puVar32 == (undefined *)0x1) {
    func_0x0001031f7e14(&puStack_1a0);
    goto LAB_10320efbc;
  }
  uVar33 = *(ulong *)(param_2 + 2);
  uVar3 = param_2[4];
  lVar30 = *(long *)(param_2 + 6);
  uVar4 = param_2[8];
  puVar29 = *(undefined **)(param_2 + 10);
  uVar5 = param_2[0xe];
  bVar2 = *(byte *)((long)param_2 + 0x21);
  uVar1 = *param_2;
  uVar31 = 0x112f4c8f8;
  puVar25 = &UNK_10db9deb8;
  func_0x0001000285a8();
  puStack_440 = (undefined *)0x2;
  uStack_438 = 0;
  if (((uVar1 & param_4 & 1) == 0) && ((bVar2 & 1) == 0)) {
    if ((uVar1 & 1) == 0) {
      func_0x00010320fdb8();
      puStack_440 = puVar25;
      uStack_438 = uVar31;
    }
    else {
      if ((param_4 & 1) != 0) {
        func_0x000107c605b4();
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10320f030);
        (*pcVar21)();
      }
      puStack_440 = (undefined *)0x1;
      uStack_438 = 0;
    }
  }
  puVar28 = puVar25;
  puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((char)uVar3 != '\x01') && (0 < (long)uVar33)) {
    puVar28 = PTR_PTR_1126b10c8;
    func_0x000107c61168();
    func_0x000107c5ab24((double)uVar33);
    func_0x000107c61180();
    puVar22 = puVar28;
    func_0x000107c5faec();
    func_0x000107c61170(puVar28);
    puVar23 = (undefined *)0x0;
    puVar28 = (undefined *)0x1;
    func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar33 = *(ulong *)(puVar23 + 0x10);
    puVar24 = (undefined *)(uVar33 + 1);
    puVar27 = puVar23;
    if (*(ulong *)(puVar23 + 0x18) >> 1 <= uVar33) {
      puVar27 = (undefined *)(ulong)(1 < *(ulong *)(puVar23 + 0x18));
      puVar28 = puVar24;
      func_0x0001000d182c(puVar27,puVar24,1,puVar23);
    }
    *(undefined **)(puVar27 + 0x10) = puVar24;
    *(undefined **)(puVar27 + uVar33 * 0x10 + 0x20) = puVar22;
    *(undefined **)(puVar27 + uVar33 * 0x10 + 0x28) = puVar25;
  }
  if ((uVar5 & 1) == 0) {
    puVar25 = param_3;
    func_0x000107c61174();
joined_r0x00010320ed78:
    if (puVar32 == (undefined *)0x0) goto LAB_10320edd8;
LAB_10320ed88:
    if ((bVar2 & 1) == 0) goto LAB_10320edd8;
    func_0x000107c5fadc();
    puVar24 = puVar29;
    func_0x00010901e6c8();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar25 = puVar29;
    puVar28 = puVar32;
    if (puVar24 == (undefined *)0x0) goto LAB_10320edd8;
    puVar25 = puVar24;
    func_0x000107c5faec();
    func_0x000107c61170(puVar24);
    uVar31 = 2;
    puVar28 = puVar32;
  }
  else {
    puVar25 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c5e2ac();
    func_0x000107c61180();
    func_0x000107c5afb0(0x4030000000000000,0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar25 == (undefined *)0x0) {
      param_3 = (undefined *)0x0;
      puVar25 = puVar24;
      goto joined_r0x00010320ed78;
    }
    param_3 = puVar25;
    func_0x000107c4507c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar32 != (undefined *)0x0) goto LAB_10320ed88;
LAB_10320edd8:
    if (((char)uVar4 == '\x01') || ((4 < lVar30 - 3U && (lVar30 != 0x22)))) {
      func_0x00010320fe9c();
    }
    else {
      func_0x00010320fe84();
    }
    uVar31 = 1;
    if ((bVar2 & 1) != 0) {
      uVar31 = 2;
    }
  }
  if (param_3 == (undefined *)0x0) {
    func_0x0001031e60c4(&puStack_250);
  }
  else {
    puStack_378 = param_3;
    func_0x0001031e60f0(&puStack_378);
    uStack_118 = uStack_2f0;
    uStack_120 = uStack_2f8;
    puStack_110 = puStack_2e8;
    uStack_ff = CONCAT17(uStack_2d0,uStack_2d7);
    uStack_158 = uStack_330;
    uStack_160 = uStack_338;
    puStack_148 = puStack_320;
    uStack_150 = uStack_328;
    puStack_138 = puStack_310;
    puStack_140 = puStack_318;
    uStack_128 = uStack_300;
    puStack_130 = puStack_308;
    uStack_198 = uStack_370;
    puStack_1a0 = puStack_378;
    uStack_188 = uStack_360;
    uStack_190 = uStack_368;
    puStack_178 = puStack_350;
    puStack_180 = puStack_358;
    puStack_168 = puStack_340;
    puStack_170 = puStack_348;
    func_0x0001031e6100(&puStack_1a0);
    uStack_1c8 = uStack_118;
    uStack_1d0 = uStack_120;
    puStack_1c0 = puStack_110;
    uStack_1af = uStack_ff;
    uStack_208 = uStack_158;
    uStack_210 = uStack_160;
    puStack_1f8 = puStack_148;
    uStack_200 = uStack_150;
    puStack_1e8 = puStack_138;
    puStack_1f0 = puStack_140;
    uStack_1d8 = uStack_128;
    puStack_1e0 = puStack_130;
    uStack_248 = uStack_198;
    puStack_250 = puStack_1a0;
    uStack_238 = uStack_188;
    uStack_240 = uStack_190;
    puStack_228 = puStack_178;
    puStack_230 = puStack_180;
    puStack_218 = puStack_168;
    puStack_220 = puStack_170;
  }
  uVar20 = uStack_1af;
  puVar19 = puStack_1c0;
  uVar18 = uStack_1c8;
  uVar17 = uStack_1d0;
  uVar16 = uStack_1d8;
  puVar15 = puStack_1e0;
  puVar14 = puStack_1e8;
  puVar13 = puStack_1f0;
  puVar12 = puStack_1f8;
  uVar11 = uStack_200;
  uVar10 = uStack_208;
  uVar9 = uStack_210;
  puVar23 = puStack_218;
  puVar22 = puStack_220;
  puVar24 = puStack_228;
  puVar29 = puStack_230;
  uVar8 = uStack_238;
  uVar7 = uStack_240;
  uVar6 = uStack_248;
  puVar32 = puStack_250;
  puVar26 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61434(puVar27);
  func_0x000107c61174(param_3);
  func_0x000107c5a938();
  func_0x000107c61180();
  func_0x000107c6142c(puVar27);
  func_0x000107c61170(param_3);
  uStack_2c8 = uVar16;
  uStack_2d0 = SUB81(puVar15,0);
  uStack_2cf = (undefined7)((ulong)puVar15 >> 8);
  uStack_2b8 = uVar18;
  uStack_2c0 = uVar17;
  puStack_2b0 = puVar19;
  uStack_29f = uVar20;
  puStack_308 = puVar23;
  puStack_310 = puVar22;
  uStack_2f8 = uVar10;
  uStack_300 = uVar9;
  puStack_2e8 = puVar12;
  uStack_2f0 = uVar11;
  uStack_2d8 = SUB81(puVar14,0);
  uStack_2d7 = (undefined7)((ulong)puVar14 >> 8);
  uStack_2e0 = SUB81(puVar13,0);
  uStack_2df = (undefined7)((ulong)puVar13 >> 8);
  uStack_338 = uVar6;
  puStack_340 = puVar32;
  uStack_328 = uVar8;
  uStack_330 = uVar7;
  puStack_378 = (undefined *)0x0;
  uStack_370 = 0;
  uStack_368 = 0x6572616873;
  uStack_360 = 0xe500000000000000;
  puStack_318 = puVar24;
  puStack_320 = puVar29;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0x100;
  uStack_260 = uStack_438;
  puStack_258 = puStack_440;
  puStack_358 = puVar25;
  puStack_350 = puVar28;
  puStack_348 = puVar27;
  uStack_288 = uVar31;
  puStack_280 = puVar26;
  func_0x0001031f7e70(&puStack_378);
  func_0x000107c610b4(&puStack_1a0,&puStack_378,0x128);
LAB_10320efbc:
  func_0x000107c610b4(param_1,&puStack_1a0,0x128);
  return;
}



/* Entry: 10320f030; end: 10320f063;  */

void FUN_10320f030(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10320f064; end: 10320f06f;  */

void FUN_10320f064(undefined8 param_1,uint *param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  long lVar30;
  undefined8 uVar31;
  undefined *puVar32;
  ulong uVar33;
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_29f;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined2 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1af;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_ff;
  
  puVar32 = *(undefined **)(param_2 + 0xc);
  if (puVar32 == (undefined *)0x1) {
    func_0x0001031f7e14(&puStack_1a0);
    goto LAB_10320efbc;
  }
  uVar33 = *(ulong *)(param_2 + 2);
  uVar3 = param_2[4];
  lVar30 = *(long *)(param_2 + 6);
  uVar4 = param_2[8];
  puVar29 = *(undefined **)(param_2 + 10);
  uVar5 = param_2[0xe];
  bVar2 = *(byte *)((long)param_2 + 0x21);
  uVar1 = *param_2;
  uVar31 = 0x112f4c8f8;
  puVar25 = &UNK_10db9deb8;
  func_0x0001000285a8();
  puStack_440 = (undefined *)0x2;
  uStack_438 = 0;
  if (((uVar1 & param_4 & 1) == 0) && ((bVar2 & 1) == 0)) {
    if ((uVar1 & 1) == 0) {
      func_0x00010320fdb8();
      puStack_440 = puVar25;
      uStack_438 = uVar31;
    }
    else {
      if ((param_4 & 1) != 0) {
        func_0x000107c605b4();
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10320f030);
        (*pcVar21)();
      }
      puStack_440 = (undefined *)0x1;
      uStack_438 = 0;
    }
  }
  puVar28 = puVar25;
  puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((char)uVar3 != '\x01') && (0 < (long)uVar33)) {
    puVar28 = PTR_PTR_1126b10c8;
    func_0x000107c61168();
    func_0x000107c5ab24((double)uVar33);
    func_0x000107c61180();
    puVar22 = puVar28;
    func_0x000107c5faec();
    func_0x000107c61170(puVar28);
    puVar23 = (undefined *)0x0;
    puVar28 = (undefined *)0x1;
    func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar33 = *(ulong *)(puVar23 + 0x10);
    puVar24 = (undefined *)(uVar33 + 1);
    puVar27 = puVar23;
    if (*(ulong *)(puVar23 + 0x18) >> 1 <= uVar33) {
      puVar27 = (undefined *)(ulong)(1 < *(ulong *)(puVar23 + 0x18));
      puVar28 = puVar24;
      func_0x0001000d182c(puVar27,puVar24,1,puVar23);
    }
    *(undefined **)(puVar27 + 0x10) = puVar24;
    *(undefined **)(puVar27 + uVar33 * 0x10 + 0x20) = puVar22;
    *(undefined **)(puVar27 + uVar33 * 0x10 + 0x28) = puVar25;
  }
  if ((uVar5 & 1) == 0) {
    puVar25 = param_3;
    func_0x000107c61174();
joined_r0x00010320ed78:
    if (puVar32 == (undefined *)0x0) goto LAB_10320edd8;
LAB_10320ed88:
    if ((bVar2 & 1) == 0) goto LAB_10320edd8;
    func_0x000107c5fadc();
    puVar24 = puVar29;
    func_0x00010901e6c8();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar25 = puVar29;
    puVar28 = puVar32;
    if (puVar24 == (undefined *)0x0) goto LAB_10320edd8;
    puVar25 = puVar24;
    func_0x000107c5faec();
    func_0x000107c61170(puVar24);
    uVar31 = 2;
    puVar28 = puVar32;
  }
  else {
    puVar25 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c5e2ac();
    func_0x000107c61180();
    func_0x000107c5afb0(0x4030000000000000,0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar25 == (undefined *)0x0) {
      param_3 = (undefined *)0x0;
      puVar25 = puVar24;
      goto joined_r0x00010320ed78;
    }
    param_3 = puVar25;
    func_0x000107c4507c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar32 != (undefined *)0x0) goto LAB_10320ed88;
LAB_10320edd8:
    if (((char)uVar4 == '\x01') || ((4 < lVar30 - 3U && (lVar30 != 0x22)))) {
      func_0x00010320fe9c();
    }
    else {
      func_0x00010320fe84();
    }
    uVar31 = 1;
    if ((bVar2 & 1) != 0) {
      uVar31 = 2;
    }
  }
  if (param_3 == (undefined *)0x0) {
    func_0x0001031e60c4(&puStack_250);
  }
  else {
    puStack_378 = param_3;
    func_0x0001031e60f0(&puStack_378);
    uStack_118 = uStack_2f0;
    uStack_120 = uStack_2f8;
    puStack_110 = puStack_2e8;
    uStack_ff = CONCAT17(uStack_2d0,uStack_2d7);
    uStack_158 = uStack_330;
    uStack_160 = uStack_338;
    puStack_148 = puStack_320;
    uStack_150 = uStack_328;
    puStack_138 = puStack_310;
    puStack_140 = puStack_318;
    uStack_128 = uStack_300;
    puStack_130 = puStack_308;
    uStack_198 = uStack_370;
    puStack_1a0 = puStack_378;
    uStack_188 = uStack_360;
    uStack_190 = uStack_368;
    puStack_178 = puStack_350;
    puStack_180 = puStack_358;
    puStack_168 = puStack_340;
    puStack_170 = puStack_348;
    func_0x0001031e6100(&puStack_1a0);
    uStack_1c8 = uStack_118;
    uStack_1d0 = uStack_120;
    puStack_1c0 = puStack_110;
    uStack_1af = uStack_ff;
    uStack_208 = uStack_158;
    uStack_210 = uStack_160;
    puStack_1f8 = puStack_148;
    uStack_200 = uStack_150;
    puStack_1e8 = puStack_138;
    puStack_1f0 = puStack_140;
    uStack_1d8 = uStack_128;
    puStack_1e0 = puStack_130;
    uStack_248 = uStack_198;
    puStack_250 = puStack_1a0;
    uStack_238 = uStack_188;
    uStack_240 = uStack_190;
    puStack_228 = puStack_178;
    puStack_230 = puStack_180;
    puStack_218 = puStack_168;
    puStack_220 = puStack_170;
  }
  uVar20 = uStack_1af;
  puVar19 = puStack_1c0;
  uVar18 = uStack_1c8;
  uVar17 = uStack_1d0;
  uVar16 = uStack_1d8;
  puVar15 = puStack_1e0;
  puVar14 = puStack_1e8;
  puVar13 = puStack_1f0;
  puVar12 = puStack_1f8;
  uVar11 = uStack_200;
  uVar10 = uStack_208;
  uVar9 = uStack_210;
  puVar23 = puStack_218;
  puVar22 = puStack_220;
  puVar24 = puStack_228;
  puVar29 = puStack_230;
  uVar8 = uStack_238;
  uVar7 = uStack_240;
  uVar6 = uStack_248;
  puVar32 = puStack_250;
  puVar26 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61434(puVar27);
  func_0x000107c61174(param_3);
  func_0x000107c5a938();
  func_0x000107c61180();
  func_0x000107c6142c(puVar27);
  func_0x000107c61170(param_3);
  uStack_2c8 = uVar16;
  uStack_2d0 = SUB81(puVar15,0);
  uStack_2cf = (undefined7)((ulong)puVar15 >> 8);
  uStack_2b8 = uVar18;
  uStack_2c0 = uVar17;
  puStack_2b0 = puVar19;
  uStack_29f = uVar20;
  puStack_308 = puVar23;
  puStack_310 = puVar22;
  uStack_2f8 = uVar10;
  uStack_300 = uVar9;
  puStack_2e8 = puVar12;
  uStack_2f0 = uVar11;
  uStack_2d8 = SUB81(puVar14,0);
  uStack_2d7 = (undefined7)((ulong)puVar14 >> 8);
  uStack_2e0 = SUB81(puVar13,0);
  uStack_2df = (undefined7)((ulong)puVar13 >> 8);
  uStack_338 = uVar6;
  puStack_340 = puVar32;
  uStack_328 = uVar8;
  uStack_330 = uVar7;
  puStack_378 = (undefined *)0x0;
  uStack_370 = 0;
  uStack_368 = 0x6572616873;
  uStack_360 = 0xe500000000000000;
  puStack_318 = puVar24;
  puStack_320 = puVar29;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0x100;
  uStack_260 = uStack_438;
  puStack_258 = puStack_440;
  puStack_358 = puVar25;
  puStack_350 = puVar28;
  puStack_348 = puVar27;
  uStack_288 = uVar31;
  puStack_280 = puVar26;
  func_0x0001031f7e70(&puStack_378);
  func_0x000107c610b4(&puStack_1a0,&puStack_378,0x128);
LAB_10320efbc:
  func_0x000107c610b4(param_1,&puStack_1a0,0x128);
  return;
}



/* Entry: 10320f070; end: 10320f0df;  */

void FUN_10320f070(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  undefined1 auStack_198 [296];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_50 = param_2[4];
  uStack_48 = (undefined1)param_2[5];
  uStack_3f = *(undefined8 *)((long)param_2 + 0x31);
  uStack_47 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  (**(code **)(unaff_x20 + 0x10))(auStack_198,&uStack_70,param_2[8],*(undefined1 *)(param_2 + 9));
  func_0x000107c610b4(param_1,auStack_198,0x128);
  return;
}



/* Entry: 10320f0e0; end: 10320f0eb;  */

code * FUN_10320f0e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x20;
  undefined *apuStack_90 [3];
  undefined8 uStack_78;
  long lStack_70;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar10 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  ppuVar7 = apuStack_90;
  puVar4 = &UNK_10db9dd80;
  func_0x000107c614e0();
  puVar5 = &UNK_10db9dda0;
  apuStack_90[0] = puVar4;
  func_0x000107c614e0(&UNK_10db9dda0,apuStack_90);
  pcVar6 = FUN_10320e4b4;
  func_0x0001000d5158(FUN_10320e4b4,puVar5,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar5);
  apuStack_90[0] = (undefined *)((ulong)apuStack_90[0] & 0xffffffffffffff00);
  func_0x0001006c71a4(apuStack_90);
  func_0x000107c61574(pcVar6);
  puVar8 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(ppuVar7);
  puVar4 = &UNK_110625d58;
  func_0x000107c613fc(&UNK_110625d58,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar9 = uVar3;
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  uVar11 = 0x112f4c898;
  func_0x0001000285a8(0x112f4c898,&UNK_10db9ddf0);
  pcVar6 = FUN_10320e8ec;
  func_0x0001000bfde0(FUN_10320e8ec,puVar4,uVar11);
  func_0x000107c61574(puVar4);
  FUN_10320e8f8();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar6);
  func_0x0001000d224c(apuStack_90);
  func_0x0001000a8868(apuStack_90,uStack_78);
  uVar11 = 0x16;
  (**(code **)(lStack_70 + 8))(0x16,uStack_78,lStack_70);
  uVar12 = uVar11;
  func_0x00010061da28();
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar11);
  func_0x0001000834e4(apuStack_90);
  puVar4 = &UNK_110625d80;
  func_0x000107c613fc(&UNK_110625d80,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  puVar5 = &UNK_110625da8;
  func_0x000107c613fc(&UNK_110625da8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10320f064;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar9);
  uVar11 = 0x112f4bfd8;
  func_0x0001000285a8(0x112f4bfd8,&UNK_10db9c310);
  pcVar6 = FUN_10320f070;
  func_0x0001000bfde0(FUN_10320f070,puVar5,uVar11);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(puVar5);
  return pcVar6;
}



/* Entry: 10320f0ec; end: 10320f10f;  */

void FUN_10320f0ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10320f110();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10320f110; end: 10320f14f;  */

void FUN_10320f110(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c8b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9de28;
  func_0x000107c61520(&DAT_10db9de28,&UNK_110625e40);
  puRam0000000112f4c8b0 = puVar1;
  return;
}



/* Entry: 10320f150; end: 10320f16b;  */

void FUN_10320f150(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4bfe8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4bff0;
  func_0x00010002969c(0x112f4bff0,&UNK_10db9de20);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4bfe8 = puVar2;
  return;
}



/* Entry: 10320f16c; end: 10320f1a3;  */

undefined * FUN_10320f16c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010320344c();
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



/* Entry: 10320f1a4; end: 10320f1d3;  */

/* WARNING: Possible PIC construction at 0x00010320f1c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010320f1c4) */

void FUN_10320f1a4(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[2]);
  return;
}



/* Entry: 10320f1d4; end: 10320f29b;  */

undefined8 * FUN_10320f1d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c6157c();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 10320f29c; end: 10320f2ef;  */

undefined8 * FUN_10320f29c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  param_1[1] = param_2[1];
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10320f2f0; end: 10320f38f;  */

int FUN_10320f2f0(ulong *param_1,int param_2)

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



/* Entry: 10320f390; end: 10320f3eb;  */

undefined1 * FUN_10320f390(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  param_1[0x38] = param_2[0x38];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10320f3ec; end: 10320f46f;  */

undefined1 * FUN_10320f3ec(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  param_1[0x21] = param_2[0x21];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x38] = param_2[0x38];
  return param_1;
}



/* Entry: 10320f470; end: 10320f4db;  */

undefined1 * FUN_10320f470(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[0x38] = param_2[0x38];
  return param_1;
}



/* Entry: 10320f4dc; end: 10320f5ab;  */

int FUN_10320f4dc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10320f5ac; end: 10320f603;  */

uint FUN_10320f5ac(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10320f604(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10320f604; end: 10320f843;  */

byte FUN_10320f604(byte *param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_60 [64];
  
  if (((*param_1 ^ *param_2) & 1) == 0) {
    if (param_1[0x10] == 1) {
      if (param_2[0x10] == 1) {
LAB_10320f66c:
        if (param_1[0x20] == 1) {
          if (param_2[0x20] != 1) goto LAB_10320f624;
        }
        else {
          bVar2 = 0;
          if ((param_2[0x20] == 1) || (*(long *)(param_1 + 0x18) != *(long *)(param_2 + 0x18)))
          goto LAB_10320f628;
        }
        if (((param_1[0x21] ^ param_2[0x21]) & 1) == 0) {
          lVar3 = *(long *)(param_1 + 0x30);
          lVar1 = *(long *)(param_2 + 0x30);
          if (lVar3 == 0) {
            if (lVar1 == 0) {
              func_0x00010320f74c(param_2,auStack_60);
LAB_10320f728:
              bVar2 = param_1[0x38] ^ param_2[0x38] ^ 1;
              goto LAB_10320f628;
            }
          }
          else if (lVar1 == 0) {
            func_0x00010320f74c(param_2,auStack_60);
          }
          else {
            uVar4 = *(ulong *)(param_1 + 0x28);
            if (((uVar4 == *(ulong *)(param_2 + 0x28)) && (lVar3 == lVar1)) ||
               (func_0x000107c605b8(uVar4,lVar3,*(ulong *)(param_2 + 0x28),lVar1,0),
               (uVar4 & 1) != 0)) goto LAB_10320f728;
          }
        }
      }
    }
    else if (param_2[0x10] != 1 && *(long *)(param_1 + 8) == *(long *)(param_2 + 8))
    goto LAB_10320f66c;
  }
LAB_10320f624:
  bVar2 = 0;
LAB_10320f628:
  return bVar2 & 1;
}



/* Entry: 10320f844; end: 10320f84b;  */

long FUN_10320f844(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10320f84c; end: 10320f917;  */

undefined1  [16] FUN_10320f84c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f131310);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320f918);
  (*pcVar1)();
}



/* Entry: 10320f918; end: 10320f93b;  */

undefined1  [16] FUN_10320f918(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x7065725f70616e73;
  func_0x000107c5fadc(0x7065725f70616e73,0xef70616e735f796c);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320ff60);
  (*pcVar1)();
}



/* Entry: 10320f93c; end: 10320fa07;  */

undefined1  [16] FUN_10320f93c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f1312f0);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320fa08);
  (*pcVar1)();
}



/* Entry: 10320fa08; end: 10320fa23;  */

undefined1  [16] FUN_10320fa08(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x7065725f70616e73;
  func_0x000107c5fadc(0x7065725f70616e73,0xea0000000000796c);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320ff60);
  (*pcVar1)();
}



/* Entry: 10320fa24; end: 10320fbbb;  */

undefined1  [16] FUN_10320fa24(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffee;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f131290);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320faf0);
  (*pcVar1)();
}



/* Entry: 10320fbbc; end: 10320fbdb;  */

undefined1  [16] FUN_10320fbbc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x635f615f646e6573;
  func_0x000107c5fadc(0x635f615f646e6573,0xeb00000000746168);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320ff60);
  (*pcVar1)();
}



/* Entry: 10320fbdc; end: 10320fca7;  */

undefined1  [16] FUN_10320fbdc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f1312d0);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320fca8);
  (*pcVar1)();
}



/* Entry: 10320fca8; end: 10320fceb;  */

undefined1  [16] FUN_10320fca8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x745f776f6c6c6f66;
  func_0x000107c5fadc(0x745f776f6c6c6f66,0xef796c7065725f6f);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320ff60);
  (*pcVar1)();
}



/* Entry: 10320fcec; end: 10320fe83;  */

undefined1  [16] FUN_10320fcec(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f131270);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320fdb8);
  (*pcVar1)();
}



/* Entry: 10320fe84; end: 10320feaf;  */

undefined1  [16] FUN_10320fe84(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6f745f646e6573;
  func_0x000107c5fadc(0x6f745f646e6573,0xe700000000000000);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320ff60);
  (*pcVar1)();
}



/* Entry: 10320feb0; end: 10320ff5f;  */

undefined1  [16] FUN_10320feb0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131220);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10320ff60);
  (*pcVar1)();
}



/* Entry: 10320ff60; end: 10320ff6f;  */

void FUN_10320ff60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10320ff70; end: 10320ff8f;  */

void FUN_10320ff70(void)

{
  func_0x000107c61168(&PTR_PTR_112f4c950);
  return;
}



/* Entry: 10320ff90; end: 1032100d7;  */

void FUN_10320ff90(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_10320ff70();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0x7065722d74616863;
  func_0x000107c5fadc(0x7065722d74616863,0xea0000000000796c);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam0000000113807128 = puVar3;
  return;
}



/* Entry: 1032100d8; end: 10321018b;  */

void FUN_1032100d8(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103210124,param_1);
  return;
}



/* Entry: 10321018c; end: 10321019b;  */

undefined1  [16] FUN_10321018c(void)

{
  return ZEXT816(0x110626078);
}


