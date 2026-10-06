/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035b3fa8; end: 1035b3fcb;  */

void FUN_1035b3fa8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035b3fcc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035b3fcc; end: 1035b400b;  */

void FUN_1035b3fcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b1b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1368;
  func_0x000107c61520(&UNK_10dbe1368,&UNK_110669630);
  puRam0000000112f7b1b0 = puVar1;
  return;
}



/* Entry: 1035b400c; end: 1035b401f;  */

void FUN_1035b400c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035b3d80)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035029d4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035b4020; end: 1035b404f;  */

void FUN_1035b4020(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035b4050; end: 1035b4053;  */

void FUN_1035b4050(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b1b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe13d0;
  func_0x000107c61520(&UNK_10dbe13d0,&UNK_110669630);
  puRam0000000112f7b1b8 = puVar1;
  return;
}



/* Entry: 1035b4054; end: 1035b4093;  */

void FUN_1035b4054(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b1b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe13d0;
  func_0x000107c61520(&UNK_10dbe13d0,&UNK_110669630);
  puRam0000000112f7b1b8 = puVar1;
  return;
}



/* Entry: 1035b4094; end: 1035b421b;  */

long FUN_1035b4094(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035b421c; end: 1035b544f;  */

undefined8 * FUN_1035b421c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  uVar6 = param_2[1];
  func_0x00010006c00c(uVar3,uVar6);
  *param_1 = uVar3;
  param_1[1] = uVar6;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  param_1[4] = uVar3;
  uVar4 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar6,uVar4);
  param_1[5] = uVar6;
  param_1[6] = uVar4;
  pcVar5 = (char *)(param_2 + 0x10);
  cVar1 = *pcVar5;
  if (cVar1 == '\x03') {
    uVar3 = param_2[0x17];
    uVar4 = param_2[0x1a];
    uVar6 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar3;
    param_1[0x1a] = uVar4;
    param_1[0x19] = uVar6;
    uVar3 = param_2[0x1b];
    uVar4 = param_2[0x1e];
    uVar6 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar3;
    param_1[0x1e] = uVar4;
    param_1[0x1d] = uVar6;
    uVar3 = param_2[0xf];
    uVar4 = param_2[0x12];
    uVar6 = param_2[0x11];
    param_1[0x10] = *(undefined8 *)pcVar5;
    param_1[0xf] = uVar3;
    param_1[0x12] = uVar4;
    param_1[0x11] = uVar6;
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x16];
    uVar6 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x16] = uVar4;
    param_1[0x15] = uVar6;
    uVar3 = param_2[7];
    uVar4 = param_2[10];
    uVar6 = param_2[9];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    param_1[10] = uVar4;
    param_1[9] = uVar6;
    uVar3 = param_2[0xb];
    uVar4 = param_2[0xe];
    uVar6 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[0xe] = uVar4;
    param_1[0xd] = uVar6;
    goto LAB_1035b4474;
  }
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar3 = param_2[0xb];
  uVar6 = param_2[0xc];
  func_0x00010006c00c(uVar3,uVar6);
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar6;
  uVar2 = param_2[0xf];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar2;
    if (cVar1 == '\x02') goto LAB_1035b4374;
LAB_1035b4338:
    *(char *)(param_1 + 0x10) = cVar1;
    uVar3 = param_2[0x11];
    uVar6 = param_2[0x12];
    func_0x00010006c00c(uVar3,uVar6);
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar6;
  }
  else {
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    param_1[0xf] = param_2[0xf];
    if (cVar1 != '\x02') goto LAB_1035b4338;
LAB_1035b4374:
    uVar3 = *(undefined8 *)pcVar5;
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar3;
    param_1[0x12] = param_2[0x12];
  }
  uVar2 = param_2[0x15];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x14] = uVar3;
    param_1[0x15] = uVar2;
  }
  else {
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x15] = param_2[0x15];
  }
  uVar2 = param_2[0x18];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x17] = uVar3;
    param_1[0x18] = uVar2;
  }
  else {
    uVar3 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x18] = param_2[0x18];
  }
  uVar2 = param_2[0x1b];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x1a] = uVar3;
    param_1[0x1b] = uVar2;
  }
  else {
    uVar3 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar3;
    param_1[0x1b] = param_2[0x1b];
  }
  uVar2 = param_2[0x1e];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x1d] = uVar3;
    param_1[0x1e] = uVar2;
  }
  else {
    uVar3 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar3;
    param_1[0x1e] = param_2[0x1e];
  }
LAB_1035b4474:
  uVar2 = param_2[0x21];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0x20];
    param_1[0x1f] = param_2[0x1f];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x20] = uVar3;
    param_1[0x21] = uVar2;
  }
  else {
    uVar3 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar3;
    param_1[0x21] = param_2[0x21];
  }
  uVar2 = param_2[0x23];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0x22];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x22] = uVar3;
    param_1[0x23] = uVar2;
    uVar2 = param_2[0x25];
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_2[0x24];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0x24] = uVar3;
      param_1[0x25] = uVar2;
      uVar2 = param_2[0x28];
      if (uVar2 >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
        uVar3 = param_2[0x27];
        func_0x00010006c00c(uVar3,uVar2);
        param_1[0x27] = uVar3;
        param_1[0x28] = uVar2;
      }
      else {
        uVar3 = param_2[0x26];
        param_1[0x27] = param_2[0x27];
        param_1[0x26] = uVar3;
        param_1[0x28] = param_2[0x28];
      }
      uVar2 = param_2[0x2b];
      if (uVar2 >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
        uVar3 = param_2[0x2a];
        func_0x00010006c00c(uVar3,uVar2);
        param_1[0x2a] = uVar3;
        param_1[0x2b] = uVar2;
      }
      else {
        uVar3 = param_2[0x29];
        param_1[0x2a] = param_2[0x2a];
        param_1[0x29] = uVar3;
        param_1[0x2b] = param_2[0x2b];
      }
    }
    else {
      uVar3 = param_2[0x24];
      uVar4 = param_2[0x27];
      uVar6 = param_2[0x26];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar3;
      param_1[0x27] = uVar4;
      param_1[0x26] = uVar6;
      uVar3 = param_2[0x28];
      uVar4 = param_2[0x2b];
      uVar6 = param_2[0x2a];
      param_1[0x29] = param_2[0x29];
      param_1[0x28] = uVar3;
      param_1[0x2b] = uVar4;
      param_1[0x2a] = uVar6;
    }
  }
  else {
    uVar3 = param_2[0x26];
    uVar4 = param_2[0x29];
    uVar6 = param_2[0x28];
    param_1[0x27] = param_2[0x27];
    param_1[0x26] = uVar3;
    param_1[0x29] = uVar4;
    param_1[0x28] = uVar6;
    uVar3 = param_2[0x2a];
    param_1[0x2b] = param_2[0x2b];
    param_1[0x2a] = uVar3;
    uVar4 = param_2[0x22];
    uVar6 = param_2[0x25];
    uVar3 = param_2[0x24];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar4;
    param_1[0x25] = uVar6;
    param_1[0x24] = uVar3;
  }
  return param_1;
}



/* Entry: 1035b5450; end: 1035b5543;  */

int FUN_1035b5450(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x58] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035b5544; end: 1035b556f;  */

void FUN_1035b5544(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 1035b5570; end: 1035b561b;  */

undefined8 * FUN_1035b5570(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1035b561c; end: 1035b5663;  */

undefined8 * FUN_1035b561c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1035b5664; end: 1035b579b;  */

int FUN_1035b5664(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035b579c; end: 1035b585b;  */

void FUN_1035b579c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe133c;
  func_0x000107c61520(&DAT_10dbe133c,&UNK_110669630);
  puRam0000000112f7b688 = puVar1;
  return;
}



/* Entry: 1035b585c; end: 1035b5877;  */

undefined8 * FUN_1035b585c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1035b5878; end: 1035b58a7;  */

void FUN_1035b5878(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035b631c();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035b58a8; end: 1035b58b3;  */

undefined1  [16] FUN_1035b58a8(void)

{
  unkuint9 *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *unaff_x20;
  return auVar1;
}



/* Entry: 1035b58b4; end: 1035b5a1f;  */

void FUN_1035b58b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7b820;
  func_0x0001000285a8(0x112f7b820,&UNK_10dbe1960);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035b5a20; end: 1035b5a73;  */

bool FUN_1035b5a20(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  func_0x0001035b5864(lVar2,(char)param_1[1]);
  func_0x0001035b5864(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 1035b5a74; end: 1035b5a7f;  */

bool FUN_1035b5a74(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 1035b5a80; end: 1035b5ac7;  */

void FUN_1035b5a80(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe1d30,0x31,2);
  uRam0000000113809098 = uStack_38;
  uRam0000000113809090 = uStack_40;
  uRam00000001138090a8 = uStack_28;
  uRam00000001138090a0 = uStack_30;
  uRam00000001138090b8 = uStack_18;
  uRam00000001138090b0 = uStack_20;
  return;
}



/* Entry: 1035b5ac8; end: 1035b5bd3;  */

void FUN_1035b5ac8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
LAB_1035b5b50:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_1035b6328();
          goto LAB_1035b5b50;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          goto LAB_1035b5b50;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035b5bd4; end: 1035b5ca3;  */

void FUN_1035b5bd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar1 = unaff_x20;
  FUN_1035b5ca4();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      uStack_48 = (undefined1)unaff_x20[1];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *unaff_x20;
      FUN_1035b6328();
      (*pcVar2)(&lStack_50,2,&UNK_110669990,plVar1,param_2,param_3);
    }
    FUN_1035b5d2c();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 1035b5ca4; end: 1035b5d2b;  */

void FUN_1035b5ca4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x20);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,1,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b5d2c; end: 1035b5daf;  */

void FUN_1035b5d2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x40);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b5db0; end: 1035b5e0b;  */

uint FUN_1035b5db0(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[5];
  uVar2 = param_1[4];
  uVar4 = param_1[6];
  uVar8 = param_2[5];
  uVar6 = param_2[4];
  uVar5 = param_2[6];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar5;
  uStack_80 = uVar2;
  uStack_78 = uVar7;
  uStack_70 = uVar4;
  if ((uVar2 & 0xff) == 2) {
    if ((uVar6 & 0xff) != 2) {
LAB_1035b6518:
      FUN_1035b62d4(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035b62d4(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar2,uVar7,uVar4);
      uVar2 = uVar6;
      uVar7 = uVar8;
      uVar4 = uVar5;
      goto LAB_1035b6634;
    }
    FUN_1035b62d4(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
    FUN_1035b62d4(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
LAB_1035b6408:
    func_0x000101556278(uVar2,uVar7,uVar4);
    uVar2 = *param_1;
    FUN_1035b5a74(uVar2,(char)param_1[1],*param_2,*(undefined1 *)(param_2 + 1));
    if ((uVar2 & 1) != 0) {
      uVar7 = param_1[8];
      uVar2 = param_1[7];
      uVar5 = param_1[10];
      uVar4 = param_1[9];
      uVar8 = param_2[8];
      uVar6 = param_2[7];
      uVar10 = param_2[10];
      uVar9 = param_2[9];
      uStack_e0 = uVar6;
      uStack_d8 = uVar8;
      uStack_d0 = uVar9;
      uStack_c8 = uVar10;
      uStack_c0 = uVar2;
      uStack_b8 = uVar7;
      uStack_b0 = uVar4;
      uStack_a8 = uVar5;
      if (uVar7 == 0) {
        if (uVar8 == 0) {
          FUN_1035b62d4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035b62d4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
LAB_1035b6704:
          func_0x000101597ae4(uVar2,uVar7,uVar4,uVar5);
          uVar2 = param_1[2];
          func_0x000100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
          uVar1 = (uint)uVar2;
          goto LAB_1035b663c;
        }
LAB_1035b6664:
        FUN_1035b62d4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
        FUN_1035b62d4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar2,uVar7,uVar4,uVar5);
        uVar2 = uVar6;
        uVar7 = uVar8;
        uVar4 = uVar9;
        uVar5 = uVar10;
      }
      else {
        if (uVar8 == 0) goto LAB_1035b6664;
        if (((uVar2 == uVar6) && (uVar7 == uVar8)) ||
           (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar7,uVar6,uVar8,0), (uVar3 & 1) != 0)) {
          FUN_1035b62d4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035b62d4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          uVar3 = uVar4;
          func_0x000100e25fcc(uVar4,uVar5,uVar9,uVar10);
          func_0x000101597ae4(uVar6,uVar8,uVar9,uVar10);
          if ((uVar3 & 1) != 0) goto LAB_1035b6704;
        }
        else {
          FUN_1035b62d4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035b62d4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          func_0x000101597ae4(uVar6,uVar8,uVar9,uVar10);
        }
      }
      func_0x000101597ae4(uVar2,uVar7,uVar4,uVar5);
    }
  }
  else {
    if ((uVar6 & 0xff) == 2) goto LAB_1035b6518;
    if ((((uint)uVar6 ^ (uint)uVar2) & 1) == 0) {
      FUN_1035b62d4(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035b62d4(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      uVar9 = uVar7;
      func_0x000100e25fcc(uVar7,uVar4,uVar8,uVar5);
      func_0x000101556278(uVar6,uVar8,uVar5);
      if ((uVar9 & 1) != 0) goto LAB_1035b6408;
    }
    else {
      FUN_1035b62d4(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035b62d4(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar6,uVar8,uVar5);
    }
LAB_1035b6634:
    func_0x000101556278(uVar2,uVar7,uVar4);
  }
  uVar1 = 0;
LAB_1035b663c:
  return uVar1 & 1;
}



/* Entry: 1035b5e0c; end: 1035b5e3b;  */

undefined1  [16] FUN_1035b5e0c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1035b5e3c; end: 1035b5e6f;  */

void FUN_1035b5e3c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1035b5e70; end: 1035b5e83;  */

undefined1  [16] FUN_1035b5e70(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1035b5e80;
  return auVar1;
}



/* Entry: 1035b5e84; end: 1035b5e97;  */

void FUN_1035b5e84(void)

{
  FUN_1035b5ac8();
  return;
}



/* Entry: 1035b5e98; end: 1035b5edf;  */

void FUN_1035b5e98(void)

{
  FUN_1035b5bd4();
  return;
}



/* Entry: 1035b5ee0; end: 1035b5ee3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035b5ee0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1035b5ee4; end: 1035b5f1b;  */

uint FUN_1035b5ee4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1035b6f2c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1035b5f1c; end: 1035b5f83;  */

uint FUN_1035b5f1c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_1035b6368(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1035b5f84; end: 1035b6023;  */

/* WARNING: Possible PIC construction at 0x0001035b5fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035b5fe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035b5fd4) */
/* WARNING: Removing unreachable block (ram,0x0001035b5fe4) */

void FUN_1035b5f84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b828 != -1) {
    func_0x000107c61568(0x112f7b828,FUN_1035b5a80);
  }
  uVar5 = uRam00000001138090b8;
  uVar4 = uRam00000001138090b0;
  uVar3 = uRam00000001138090a8;
  uVar2 = uRam00000001138090a0;
  uVar1 = uRam0000000113809098;
  *param_1 = uRam0000000113809090;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1035b6024; end: 1035b605f;  */

void FUN_1035b6024(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7b880;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7b880,&UNK_10dbe1ba8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035b6060; end: 1035b6183;  */

void FUN_1035b6060(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035b6184; end: 1035b6233;  */

uint FUN_1035b6184(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_1035b6368(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1035b6234; end: 1035b62d3;  */

/* WARNING: Possible PIC construction at 0x0001035b6280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035b6290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035b6284) */
/* WARNING: Removing unreachable block (ram,0x0001035b6294) */

void FUN_1035b6234(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b840 != -1) {
    func_0x000107c61568(0x112f7b840,0x1035b61ec);
  }
  uVar5 = uRam00000001138090e8;
  uVar4 = uRam00000001138090e0;
  uVar3 = uRam00000001138090d8;
  uVar2 = uRam00000001138090d0;
  uVar1 = uRam00000001138090c8;
  *param_1 = uRam00000001138090c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1035b62d4; end: 1035b631b;  */

undefined8 FUN_1035b62d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035b631c; end: 1035b6327;  */

void FUN_1035b631c(void)

{
  return;
}



/* Entry: 1035b6328; end: 1035b6367;  */

void FUN_1035b6328(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe1968;
  func_0x000107c61520(&DAT_10dbe1968,&UNK_110669990);
  puRam0000000112f7b830 = puVar1;
  return;
}



/* Entry: 1035b6368; end: 1035b6787;  */

uint FUN_1035b6368(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[5];
  uVar2 = param_1[4];
  uVar4 = param_1[6];
  uVar8 = param_2[5];
  uVar6 = param_2[4];
  uVar5 = param_2[6];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar5;
  uStack_80 = uVar2;
  uStack_78 = uVar7;
  uStack_70 = uVar4;
  if ((uVar2 & 0xff) == 2) {
    if ((uVar6 & 0xff) != 2) {
LAB_1035b6518:
      FUN_1035b62d4(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035b62d4(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar2,uVar7,uVar4);
      uVar2 = uVar6;
      uVar7 = uVar8;
      uVar4 = uVar5;
      goto LAB_1035b6634;
    }
    FUN_1035b62d4(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
    FUN_1035b62d4(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
LAB_1035b6408:
    func_0x000101556278(uVar2,uVar7,uVar4);
    uVar2 = *param_1;
    FUN_1035b5a74(uVar2,(char)param_1[1],*param_2,*(undefined1 *)(param_2 + 1));
    if ((uVar2 & 1) != 0) {
      uVar7 = param_1[8];
      uVar2 = param_1[7];
      uVar5 = param_1[10];
      uVar4 = param_1[9];
      uVar8 = param_2[8];
      uVar6 = param_2[7];
      uVar10 = param_2[10];
      uVar9 = param_2[9];
      uStack_e0 = uVar6;
      uStack_d8 = uVar8;
      uStack_d0 = uVar9;
      uStack_c8 = uVar10;
      uStack_c0 = uVar2;
      uStack_b8 = uVar7;
      uStack_b0 = uVar4;
      uStack_a8 = uVar5;
      if (uVar7 == 0) {
        if (uVar8 == 0) {
          FUN_1035b62d4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035b62d4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
LAB_1035b6704:
          func_0x000101597ae4(uVar2,uVar7,uVar4,uVar5);
          uVar2 = param_1[2];
          func_0x000100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
          uVar1 = (uint)uVar2;
          goto LAB_1035b663c;
        }
LAB_1035b6664:
        FUN_1035b62d4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
        FUN_1035b62d4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar2,uVar7,uVar4,uVar5);
        uVar2 = uVar6;
        uVar7 = uVar8;
        uVar4 = uVar9;
        uVar5 = uVar10;
      }
      else {
        if (uVar8 == 0) goto LAB_1035b6664;
        if (((uVar2 == uVar6) && (uVar7 == uVar8)) ||
           (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar7,uVar6,uVar8,0), (uVar3 & 1) != 0)) {
          FUN_1035b62d4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035b62d4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          uVar3 = uVar4;
          func_0x000100e25fcc(uVar4,uVar5,uVar9,uVar10);
          func_0x000101597ae4(uVar6,uVar8,uVar9,uVar10);
          if ((uVar3 & 1) != 0) goto LAB_1035b6704;
        }
        else {
          FUN_1035b62d4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035b62d4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          func_0x000101597ae4(uVar6,uVar8,uVar9,uVar10);
        }
      }
      func_0x000101597ae4(uVar2,uVar7,uVar4,uVar5);
    }
  }
  else {
    if ((uVar6 & 0xff) == 2) goto LAB_1035b6518;
    if ((((uint)uVar6 ^ (uint)uVar2) & 1) == 0) {
      FUN_1035b62d4(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035b62d4(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      uVar9 = uVar7;
      func_0x000100e25fcc(uVar7,uVar4,uVar8,uVar5);
      func_0x000101556278(uVar6,uVar8,uVar5);
      if ((uVar9 & 1) != 0) goto LAB_1035b6408;
    }
    else {
      FUN_1035b62d4(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035b62d4(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar6,uVar8,uVar5);
    }
LAB_1035b6634:
    func_0x000101556278(uVar2,uVar7,uVar4);
  }
  uVar1 = 0;
LAB_1035b663c:
  return uVar1 & 1;
}



/* Entry: 1035b6788; end: 1035b67c7;  */

void FUN_1035b6788(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1ad8;
  func_0x000107c61520(&UNK_10dbe1ad8,&UNK_1106698f0);
  puRam0000000112f7b838 = puVar1;
  return;
}



/* Entry: 1035b67c8; end: 1035b67db;  */

void FUN_1035b67c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035b67dc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035b681c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035b67dc; end: 1035b685b;  */

void FUN_1035b67dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1a00;
  func_0x000107c61520(&UNK_10dbe1a00,&UNK_110669990);
  puRam0000000112f7b848 = puVar1;
  return;
}



/* Entry: 1035b685c; end: 1035b685f;  */

void FUN_1035b685c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7b858 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7b860;
  func_0x00010002969c(0x112f7b860,&UNK_10dbe1988);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7b858 = puVar2;
  return;
}



/* Entry: 1035b6860; end: 1035b68af;  */

void FUN_1035b6860(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7b858 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7b860;
  func_0x00010002969c(0x112f7b860,&UNK_10dbe1988);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7b858 = puVar2;
  return;
}



/* Entry: 1035b68b0; end: 1035b68b3;  */

void FUN_1035b68b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1a40;
  func_0x000107c61520(&UNK_10dbe1a40,&UNK_110669990);
  puRam0000000112f7b868 = puVar1;
  return;
}



/* Entry: 1035b68b4; end: 1035b68f3;  */

void FUN_1035b68b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1a40;
  func_0x000107c61520(&UNK_10dbe1a40,&UNK_110669990);
  puRam0000000112f7b868 = puVar1;
  return;
}



/* Entry: 1035b68f4; end: 1035b6917;  */

void FUN_1035b68f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035b6918();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035b6918; end: 1035b6957;  */

void FUN_1035b6918(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1ab0;
  func_0x000107c61520(&UNK_10dbe1ab0,&UNK_1106698f0);
  puRam0000000112f7b870 = puVar1;
  return;
}



/* Entry: 1035b6958; end: 1035b696b;  */

void FUN_1035b6958(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035b6788();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103502f54)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035b696c; end: 1035b699b;  */

void FUN_1035b696c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035b699c; end: 1035b699f;  */

void FUN_1035b699c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1b18;
  func_0x000107c61520(&UNK_10dbe1b18,&UNK_1106698f0);
  puRam0000000112f7b878 = puVar1;
  return;
}



/* Entry: 1035b69a0; end: 1035b69df;  */

void FUN_1035b69a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1b18;
  func_0x000107c61520(&UNK_10dbe1b18,&UNK_1106698f0);
  puRam0000000112f7b878 = puVar1;
  return;
}



/* Entry: 1035b69e0; end: 1035b6a63;  */

long FUN_1035b69e0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035b6a64; end: 1035b6db7;  */

undefined8 * FUN_1035b6a64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar4 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar4,uVar1);
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  cVar2 = *(char *)(param_2 + 4);
  if (cVar2 == '\x02') {
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[6] = param_2[6];
    lVar3 = param_2[8];
  }
  else {
    *(char *)(param_1 + 4) = cVar2;
    uVar4 = param_2[5];
    uVar1 = param_2[6];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[5] = uVar4;
    param_1[6] = uVar1;
    lVar3 = param_2[8];
  }
  if (lVar3 == 0) {
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
  }
  else {
    param_1[7] = param_2[7];
    param_1[8] = lVar3;
    uVar4 = param_2[9];
    uVar1 = param_2[10];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar1);
    param_1[9] = uVar4;
    param_1[10] = uVar1;
  }
  return param_1;
}



/* Entry: 1035b6db8; end: 1035b6f2b;  */

int FUN_1035b6db8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035b6f2c; end: 1035b6f6b;  */

void FUN_1035b6f2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe1a84;
  func_0x000107c61520(&DAT_10dbe1a84,&UNK_1106698f0);
  puRam0000000112f7b888 = puVar1;
  return;
}



/* Entry: 1035b6f6c; end: 1035b6f7b;  */

void FUN_1035b6f6c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1035b6f7c; end: 1035b6fab;  */

void FUN_1035b6f7c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035b7dfc();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035b6fac; end: 1035b6fb3;  */

undefined8 FUN_1035b6fac(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035b6fb4; end: 1035b7027;  */

void FUN_1035b6fb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7b8f8;
  func_0x0001000285a8(0x112f7b8f8,&UNK_10dbe1d70);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035b7028; end: 1035b7033;  */

void FUN_1035b7028(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035b7034; end: 1035b70df;  */

void FUN_1035b7034(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035b70e0; end: 1035b70f3;  */

bool FUN_1035b70e0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035b70f4; end: 1035b713b;  */

void FUN_1035b70f4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe2020,0x9a,2);
  uRam00000001138090f8 = uStack_38;
  uRam00000001138090f0 = uStack_40;
  uRam0000000113809108 = uStack_28;
  uRam0000000113809100 = uStack_30;
  uRam0000000113809118 = uStack_18;
  uRam0000000113809110 = uStack_20;
  return;
}



/* Entry: 1035b713c; end: 1035b7307;  */

/* WARNING: Removing unreachable block (ram,0x0001035b72c8) */

void FUN_1035b713c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar4 = *(code **)(param_3 + 0x180);
            func_0x0001035b7e48();
          }
          else {
            if (lVar1 != 4) goto LAB_1035b72b8;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
          }
          goto LAB_1035b72a4;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          goto LAB_1035b72a4;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          goto LAB_1035b72a4;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
          }
          else {
            if (lVar1 != 6) goto LAB_1035b72b8;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
          }
        }
        else if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x0001035b7e08();
        }
        else {
          if (lVar1 != 8) goto LAB_1035b72b8;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
        }
LAB_1035b72a4:
        (*pcVar4)();
      }
LAB_1035b72b8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035b7308; end: 1035b74b7;  */

/* WARNING: Removing unreachable block (ram,0x0001035b73d0) */

void FUN_1035b7308(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  code *pcVar6;
  long lStack_60;
  undefined1 uStack_58;
  
  FUN_1035b74b8();
  if (unaff_x21 == 0) {
    FUN_1035b7540();
    lVar5 = *unaff_x20;
    lVar1 = unaff_x20[1];
    lVar2 = lVar5;
    FUN_10368d128(lVar5,(char)lVar1);
    lVar3 = 0;
    FUN_10368d128(0,1);
    if (lVar2 != lVar3) {
      pcVar6 = *(code **)(param_3 + 0x80);
      lStack_60 = lVar5;
      uStack_58 = (char)lVar1;
      func_0x0001035b7e48();
      (*pcVar6)(&lStack_60,3,&UNK_110679810,lVar3,param_2,param_3);
    }
    FUN_1035b75c8();
    FUN_1035b7650();
    plVar4 = unaff_x20;
    FUN_1035b76d8();
    if (unaff_x20[2] != 0) {
      uStack_58 = (undefined1)unaff_x20[3];
      pcVar6 = *(code **)(param_3 + 0x80);
      lStack_60 = unaff_x20[2];
      func_0x0001035b7e08();
      (*pcVar6)(&lStack_60,7,&UNK_110669c70,plVar4,param_2,param_3);
    }
    FUN_1035b7760();
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 1035b74b8; end: 1035b753f;  */

void FUN_1035b74b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x40);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,1,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b7540; end: 1035b75c7;  */

void FUN_1035b7540(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x48);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,2,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b75c8; end: 1035b764f;  */

void FUN_1035b75c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x70);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,4,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b7650; end: 1035b76d7;  */

void FUN_1035b7650(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x88);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,5,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b76d8; end: 1035b775f;  */

void FUN_1035b76d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x98);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,6,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b7760; end: 1035b77e7;  */

void FUN_1035b7760(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xb8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xb0);
    uStack_60 = *(undefined8 *)(param_1 + 0xa8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,8,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b77e8; end: 1035b7863;  */

uint FUN_1035b77e8(long *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong auStack_208 [3];
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar14 = param_1[7];
  uVar12 = param_1[6];
  uVar4 = param_1[8];
  uVar15 = param_2[7];
  uVar13 = param_2[6];
  uVar10 = param_2[8];
  uStack_b0 = uVar13;
  uStack_a8 = uVar15;
  uStack_a0 = uVar10;
  uStack_90 = uVar12;
  uStack_88 = uVar14;
  uStack_80 = uVar4;
  if (uVar4 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_1035b81b8;
    if (uVar12 == uVar13) {
      FUN_1035b7db4(&uStack_90,&uStack_d0,0x112db6f48,&UNK_10d969b40);
      FUN_1035b7db4(&uStack_b0,&uStack_d0,0x112db6f48,&UNK_10d969b40);
      uVar13 = uVar14;
      func_0x000100e25fcc(uVar14,uVar4,uVar15,uVar10);
      func_0x00010159fa64(uVar12,uVar15,uVar10);
      if ((uVar13 & 1) != 0) goto LAB_1035b7f2c;
    }
    else {
      FUN_1035b7db4(&uStack_90,&uStack_d0,0x112db6f48,&UNK_10d969b40);
      puVar2 = &uStack_b0;
      puVar3 = &uStack_d0;
LAB_1035b830c:
      FUN_1035b7db4(puVar2,puVar3,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(uVar13,uVar15,uVar10);
    }
LAB_1035b8334:
    func_0x00010159fa64(uVar12,uVar14,uVar4);
  }
  else {
    if (uVar10 >> 0x3c < 0xf) {
LAB_1035b81b8:
      FUN_1035b7db4(&uStack_90,&uStack_d0,0x112db6f48,&UNK_10d969b40);
      puVar2 = &uStack_b0;
      puVar3 = &uStack_d0;
      uVar7 = uVar4;
      uVar8 = uVar14;
      uVar9 = uVar12;
      uVar4 = uVar10;
      uVar14 = uVar15;
      uVar12 = uVar13;
LAB_1035b81e4:
      FUN_1035b7db4(puVar2,puVar3,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(uVar9,uVar8,uVar7);
      goto LAB_1035b8334;
    }
    FUN_1035b7db4(&uStack_90,&uStack_d0,0x112db6f48,&UNK_10d969b40);
    FUN_1035b7db4(&uStack_b0,&uStack_d0,0x112db6f48,&UNK_10d969b40);
LAB_1035b7f2c:
    func_0x00010159fa64(uVar12,uVar14,uVar4);
    uVar14 = param_1[10];
    uVar4 = param_1[9];
    lVar5 = param_1[0xb];
    uVar10 = param_2[10];
    uVar12 = param_2[9];
    lVar11 = param_2[0xb];
    uStack_f0 = uVar12;
    uStack_e8 = uVar10;
    lStack_e0 = lVar11;
    uStack_d0 = uVar4;
    uStack_c8 = uVar14;
    lStack_c0 = lVar5;
    if ((uVar4 & 0xff) == 2) {
      if ((uVar12 & 0xff) != 2) {
LAB_1035b8288:
        FUN_1035b7db4(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        FUN_1035b7db4(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar4,uVar14,lVar5);
        uVar4 = uVar12;
        uVar14 = uVar10;
        lVar5 = lVar11;
        goto LAB_1035b8400;
      }
      FUN_1035b7db4(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
      FUN_1035b7db4(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
LAB_1035b7fb4:
      func_0x000101556278(uVar4,uVar14,lVar5);
      lVar11 = *param_1;
      lVar6 = *param_2;
      lVar5 = param_2[1];
      FUN_10368d128(lVar11,(char)param_1[1]);
      FUN_10368d128(lVar6,(char)lVar5);
      if (lVar11 == lVar6) {
        uVar14 = param_1[0xd];
        uVar12 = param_1[0xc];
        uVar4 = param_1[0xe];
        uVar15 = param_2[0xd];
        uVar13 = param_2[0xc];
        uVar10 = param_2[0xe];
        uStack_130 = uVar13;
        uStack_128 = uVar15;
        uStack_120 = uVar10;
        uStack_110 = uVar12;
        uStack_108 = uVar14;
        uStack_100 = uVar4;
        if (uVar4 >> 0x3c < 0xf) {
          if (0xe < uVar10 >> 0x3c) goto LAB_1035b8434;
          if (uVar12 != uVar13) {
            FUN_1035b7db4(&uStack_110,&uStack_150,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_130;
            puVar3 = &uStack_150;
            goto LAB_1035b830c;
          }
          FUN_1035b7db4(&uStack_110,&uStack_150,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_130,&uStack_150,0x112db6f48,&UNK_10d969b40);
          uVar13 = uVar14;
          func_0x000100e25fcc(uVar14,uVar4,uVar15,uVar10);
          func_0x00010159fa64(uVar12,uVar15,uVar10);
          if ((uVar13 & 1) == 0) goto LAB_1035b8334;
        }
        else {
          if (uVar10 >> 0x3c < 0xf) {
LAB_1035b8434:
            FUN_1035b7db4(&uStack_110,&uStack_150,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_130;
            puVar3 = &uStack_150;
            uVar7 = uVar4;
            uVar8 = uVar14;
            uVar9 = uVar12;
            uVar4 = uVar10;
            uVar14 = uVar15;
            uVar12 = uVar13;
            goto LAB_1035b81e4;
          }
          FUN_1035b7db4(&uStack_110,&uStack_150,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_130,&uStack_150,0x112db6f48,&UNK_10d969b40);
        }
        func_0x00010159fa64(uVar12,uVar14,uVar4);
        uVar14 = param_1[0x10];
        uVar12 = param_1[0xf];
        uVar4 = param_1[0x11];
        uVar15 = param_2[0x10];
        uVar13 = param_2[0xf];
        uVar10 = param_2[0x11];
        uStack_170 = uVar13;
        uStack_168 = uVar15;
        uStack_160 = uVar10;
        uStack_150 = uVar12;
        uStack_148 = uVar14;
        uStack_140 = uVar4;
        if (uVar4 >> 0x3c < 0xf) {
          if (0xe < uVar10 >> 0x3c) goto LAB_1035b84dc;
          if (uVar12 != uVar13) {
            FUN_1035b7db4(&uStack_150,&uStack_190,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_170;
            puVar3 = &uStack_190;
            goto LAB_1035b830c;
          }
          FUN_1035b7db4(&uStack_150,&uStack_190,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_170,&uStack_190,0x112db6f48,&UNK_10d969b40);
          uVar13 = uVar14;
          func_0x000100e25fcc(uVar14,uVar4,uVar15,uVar10);
          func_0x00010159fa64(uVar12,uVar15,uVar10);
          if ((uVar13 & 1) == 0) goto LAB_1035b8334;
        }
        else {
          if (uVar10 >> 0x3c < 0xf) {
LAB_1035b84dc:
            FUN_1035b7db4(&uStack_150,&uStack_190,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_170;
            puVar3 = &uStack_190;
            uVar7 = uVar4;
            uVar8 = uVar14;
            uVar9 = uVar12;
            uVar4 = uVar10;
            uVar14 = uVar15;
            uVar12 = uVar13;
            goto LAB_1035b81e4;
          }
          FUN_1035b7db4(&uStack_150,&uStack_190,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_170,&uStack_190,0x112db6f48,&UNK_10d969b40);
        }
        func_0x00010159fa64(uVar12,uVar14,uVar4);
        uVar14 = param_1[0x13];
        uVar12 = param_1[0x12];
        uVar4 = param_1[0x14];
        uVar15 = param_2[0x13];
        uVar13 = param_2[0x12];
        uVar10 = param_2[0x14];
        uStack_1b0 = uVar13;
        uStack_1a8 = uVar15;
        uStack_1a0 = uVar10;
        uStack_190 = uVar12;
        uStack_188 = uVar14;
        uStack_180 = uVar4;
        if (uVar4 >> 0x3c < 0xf) {
          if (0xe < uVar10 >> 0x3c) goto LAB_1035b85b8;
          if (uVar12 != uVar13) {
            FUN_1035b7db4(&uStack_190,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_1b0;
            puVar3 = &uStack_1d0;
            goto LAB_1035b830c;
          }
          FUN_1035b7db4(&uStack_190,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_1b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
          uVar13 = uVar14;
          func_0x000100e25fcc(uVar14,uVar4,uVar15,uVar10);
          func_0x00010159fa64(uVar12,uVar15,uVar10);
          if ((uVar13 & 1) == 0) goto LAB_1035b8334;
        }
        else {
          if (uVar10 >> 0x3c < 0xf) {
LAB_1035b85b8:
            FUN_1035b7db4(&uStack_190,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_1b0;
            puVar3 = &uStack_1d0;
            uVar7 = uVar4;
            uVar8 = uVar14;
            uVar9 = uVar12;
            uVar4 = uVar10;
            uVar14 = uVar15;
            uVar12 = uVar13;
            goto LAB_1035b81e4;
          }
          FUN_1035b7db4(&uStack_190,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_1b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
        }
        func_0x00010159fa64(uVar12,uVar14,uVar4);
        lVar5 = param_1[2];
        lVar11 = param_2[2];
        if ((char)param_2[3] == '\x01') {
          if (lVar11 < 2) {
            if (lVar11 == 0) {
              if (lVar5 == 0) {
LAB_1035b8690:
                uVar14 = param_1[0x16];
                uVar12 = param_1[0x15];
                uVar4 = param_1[0x17];
                uVar15 = param_2[0x16];
                uVar13 = param_2[0x15];
                uVar10 = param_2[0x17];
                uStack_1f0 = uVar13;
                uStack_1e8 = uVar15;
                uStack_1e0 = uVar10;
                uStack_1d0 = uVar12;
                uStack_1c8 = uVar14;
                uStack_1c0 = uVar4;
                if (uVar4 >> 0x3c < 0xf) {
                  if (0xe < uVar10 >> 0x3c) goto LAB_1035b8778;
                  if (uVar12 != uVar13) {
                    FUN_1035b7db4(&uStack_1d0,auStack_208,0x112db6f48,&UNK_10d969b40);
                    puVar2 = &uStack_1f0;
                    puVar3 = auStack_208;
                    goto LAB_1035b830c;
                  }
                  FUN_1035b7db4(&uStack_1d0,auStack_208,0x112db6f48,&UNK_10d969b40);
                  FUN_1035b7db4(&uStack_1f0,auStack_208,0x112db6f48,&UNK_10d969b40);
                  uVar13 = uVar14;
                  func_0x000100e25fcc(uVar14,uVar4,uVar15,uVar10);
                  func_0x00010159fa64(uVar12,uVar15,uVar10);
                  if ((uVar13 & 1) == 0) goto LAB_1035b8334;
                }
                else {
                  if (uVar10 >> 0x3c < 0xf) {
LAB_1035b8778:
                    FUN_1035b7db4(&uStack_1d0,auStack_208,0x112db6f48,&UNK_10d969b40);
                    puVar2 = &uStack_1f0;
                    puVar3 = auStack_208;
                    uVar7 = uVar4;
                    uVar8 = uVar14;
                    uVar9 = uVar12;
                    uVar4 = uVar10;
                    uVar14 = uVar15;
                    uVar12 = uVar13;
                    goto LAB_1035b81e4;
                  }
                  FUN_1035b7db4(&uStack_1d0,auStack_208,0x112db6f48,&UNK_10d969b40);
                  FUN_1035b7db4(&uStack_1f0,auStack_208,0x112db6f48,&UNK_10d969b40);
                }
                func_0x00010159fa64(uVar12,uVar14,uVar4);
                lVar5 = param_1[4];
                func_0x000100e25fcc(lVar5,param_1[5],param_2[4],param_2[5]);
                uVar1 = (uint)lVar5;
                goto LAB_1035b8408;
              }
            }
            else if (lVar5 == 1) goto LAB_1035b8690;
          }
          else if (lVar11 == 2) {
            if (lVar5 == 2) goto LAB_1035b8690;
          }
          else if (lVar5 == 3) goto LAB_1035b8690;
        }
        else if (lVar5 == lVar11) goto LAB_1035b8690;
      }
    }
    else {
      if ((uVar12 & 0xff) == 2) goto LAB_1035b8288;
      if ((((uint)uVar12 ^ (uint)uVar4) & 1) == 0) {
        FUN_1035b7db4(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        FUN_1035b7db4(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        uVar15 = uVar14;
        func_0x000100e25fcc(uVar14,lVar5,uVar10,lVar11);
        func_0x000101556278(uVar12,uVar10,lVar11);
        if ((uVar15 & 1) != 0) goto LAB_1035b7fb4;
      }
      else {
        FUN_1035b7db4(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        FUN_1035b7db4(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar12,uVar10,lVar11);
      }
LAB_1035b8400:
      func_0x000101556278(uVar4,uVar14,lVar5);
    }
  }
  uVar1 = 0;
LAB_1035b8408:
  return uVar1 & 1;
}



/* Entry: 1035b7864; end: 1035b7893;  */

undefined1  [16] FUN_1035b7864(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1035b7894; end: 1035b78c7;  */

void FUN_1035b7894(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1035b78c8; end: 1035b78db;  */

undefined1  [16] FUN_1035b78c8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1035b78d8;
  return auVar1;
}



/* Entry: 1035b78dc; end: 1035b78ef;  */

void FUN_1035b78dc(void)

{
  FUN_1035b713c();
  return;
}



/* Entry: 1035b78f0; end: 1035b7947;  */

void FUN_1035b78f0(void)

{
  FUN_1035b7308();
  return;
}



/* Entry: 1035b7948; end: 1035b794b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035b7948(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1035b794c; end: 1035b7983;  */

uint FUN_1035b794c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1035b9538();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1035b7984; end: 1035b7a13;  */

uint FUN_1035b7984(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_28 = param_1[0x17];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_e8 = unaff_x20[0x17];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  FUN_1035b7e88(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1035b7a14; end: 1035b7ab3;  */

/* WARNING: Possible PIC construction at 0x0001035b7a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035b7a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035b7a64) */
/* WARNING: Removing unreachable block (ram,0x0001035b7a74) */

void FUN_1035b7a14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b900 != -1) {
    func_0x000107c61568(0x112f7b900,FUN_1035b70f4);
  }
  uVar5 = uRam0000000113809118;
  uVar4 = uRam0000000113809110;
  uVar3 = uRam0000000113809108;
  uVar2 = uRam0000000113809100;
  uVar1 = uRam00000001138090f8;
  *param_1 = uRam00000001138090f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1035b7ab4; end: 1035b7aef;  */

void FUN_1035b7ab4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7b960;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7b960,&UNK_10dbe1fd0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035b7af0; end: 1035b7c3b;  */

void FUN_1035b7af0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
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
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_38 = unaff_x20[0x17];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035b7c3c; end: 1035b7ccb;  */

uint FUN_1035b7c3c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_e8 = param_1[0x17];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_28 = param_2[0x17];
  uStack_30 = param_2[0x16];
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
  FUN_1035b7e88(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1035b7ccc; end: 1035b7d13;  */

void FUN_1035b7ccc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe1fe0,0x3e,2);
  uRam0000000113809128 = uStack_38;
  uRam0000000113809120 = uStack_40;
  uRam0000000113809138 = uStack_28;
  uRam0000000113809130 = uStack_30;
  uRam0000000113809148 = uStack_18;
  uRam0000000113809140 = uStack_20;
  return;
}



/* Entry: 1035b7d14; end: 1035b7db3;  */

/* WARNING: Possible PIC construction at 0x0001035b7d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035b7d70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035b7d64) */
/* WARNING: Removing unreachable block (ram,0x0001035b7d74) */

void FUN_1035b7d14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b920 != -1) {
    func_0x000107c61568(0x112f7b920,FUN_1035b7ccc);
  }
  uVar5 = uRam0000000113809148;
  uVar4 = uRam0000000113809140;
  uVar3 = uRam0000000113809138;
  uVar2 = uRam0000000113809130;
  uVar1 = uRam0000000113809128;
  *param_1 = uRam0000000113809120;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1035b7db4; end: 1035b7dfb;  */

undefined8 FUN_1035b7db4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035b7dfc; end: 1035b7e07;  */

void FUN_1035b7dfc(void)

{
  return;
}



/* Entry: 1035b7e08; end: 1035b7e87;  */

void FUN_1035b7e08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe1d78;
  func_0x000107c61520(&DAT_10dbe1d78,&UNK_110669c70);
  puRam0000000112f7b908 = puVar1;
  return;
}



/* Entry: 1035b7e88; end: 1035b885f;  */

uint FUN_1035b7e88(long *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong auStack_208 [3];
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar14 = param_1[7];
  uVar12 = param_1[6];
  uVar4 = param_1[8];
  uVar15 = param_2[7];
  uVar13 = param_2[6];
  uVar10 = param_2[8];
  uStack_b0 = uVar13;
  uStack_a8 = uVar15;
  uStack_a0 = uVar10;
  uStack_90 = uVar12;
  uStack_88 = uVar14;
  uStack_80 = uVar4;
  if (uVar4 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_1035b81b8;
    if (uVar12 == uVar13) {
      FUN_1035b7db4(&uStack_90,&uStack_d0,0x112db6f48,&UNK_10d969b40);
      FUN_1035b7db4(&uStack_b0,&uStack_d0,0x112db6f48,&UNK_10d969b40);
      uVar13 = uVar14;
      func_0x000100e25fcc(uVar14,uVar4,uVar15,uVar10);
      func_0x00010159fa64(uVar12,uVar15,uVar10);
      if ((uVar13 & 1) != 0) goto LAB_1035b7f2c;
    }
    else {
      FUN_1035b7db4(&uStack_90,&uStack_d0,0x112db6f48,&UNK_10d969b40);
      puVar2 = &uStack_b0;
      puVar3 = &uStack_d0;
LAB_1035b830c:
      FUN_1035b7db4(puVar2,puVar3,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(uVar13,uVar15,uVar10);
    }
LAB_1035b8334:
    func_0x00010159fa64(uVar12,uVar14,uVar4);
  }
  else {
    if (uVar10 >> 0x3c < 0xf) {
LAB_1035b81b8:
      FUN_1035b7db4(&uStack_90,&uStack_d0,0x112db6f48,&UNK_10d969b40);
      puVar2 = &uStack_b0;
      puVar3 = &uStack_d0;
      uVar7 = uVar4;
      uVar8 = uVar14;
      uVar9 = uVar12;
      uVar4 = uVar10;
      uVar14 = uVar15;
      uVar12 = uVar13;
LAB_1035b81e4:
      FUN_1035b7db4(puVar2,puVar3,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(uVar9,uVar8,uVar7);
      goto LAB_1035b8334;
    }
    FUN_1035b7db4(&uStack_90,&uStack_d0,0x112db6f48,&UNK_10d969b40);
    FUN_1035b7db4(&uStack_b0,&uStack_d0,0x112db6f48,&UNK_10d969b40);
LAB_1035b7f2c:
    func_0x00010159fa64(uVar12,uVar14,uVar4);
    uVar14 = param_1[10];
    uVar4 = param_1[9];
    lVar5 = param_1[0xb];
    uVar10 = param_2[10];
    uVar12 = param_2[9];
    lVar11 = param_2[0xb];
    uStack_f0 = uVar12;
    uStack_e8 = uVar10;
    lStack_e0 = lVar11;
    uStack_d0 = uVar4;
    uStack_c8 = uVar14;
    lStack_c0 = lVar5;
    if ((uVar4 & 0xff) == 2) {
      if ((uVar12 & 0xff) != 2) {
LAB_1035b8288:
        FUN_1035b7db4(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        FUN_1035b7db4(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar4,uVar14,lVar5);
        uVar4 = uVar12;
        uVar14 = uVar10;
        lVar5 = lVar11;
        goto LAB_1035b8400;
      }
      FUN_1035b7db4(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
      FUN_1035b7db4(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
LAB_1035b7fb4:
      func_0x000101556278(uVar4,uVar14,lVar5);
      lVar11 = *param_1;
      lVar6 = *param_2;
      lVar5 = param_2[1];
      FUN_10368d128(lVar11,(char)param_1[1]);
      FUN_10368d128(lVar6,(char)lVar5);
      if (lVar11 == lVar6) {
        uVar14 = param_1[0xd];
        uVar12 = param_1[0xc];
        uVar4 = param_1[0xe];
        uVar15 = param_2[0xd];
        uVar13 = param_2[0xc];
        uVar10 = param_2[0xe];
        uStack_130 = uVar13;
        uStack_128 = uVar15;
        uStack_120 = uVar10;
        uStack_110 = uVar12;
        uStack_108 = uVar14;
        uStack_100 = uVar4;
        if (uVar4 >> 0x3c < 0xf) {
          if (0xe < uVar10 >> 0x3c) goto LAB_1035b8434;
          if (uVar12 != uVar13) {
            FUN_1035b7db4(&uStack_110,&uStack_150,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_130;
            puVar3 = &uStack_150;
            goto LAB_1035b830c;
          }
          FUN_1035b7db4(&uStack_110,&uStack_150,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_130,&uStack_150,0x112db6f48,&UNK_10d969b40);
          uVar13 = uVar14;
          func_0x000100e25fcc(uVar14,uVar4,uVar15,uVar10);
          func_0x00010159fa64(uVar12,uVar15,uVar10);
          if ((uVar13 & 1) == 0) goto LAB_1035b8334;
        }
        else {
          if (uVar10 >> 0x3c < 0xf) {
LAB_1035b8434:
            FUN_1035b7db4(&uStack_110,&uStack_150,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_130;
            puVar3 = &uStack_150;
            uVar7 = uVar4;
            uVar8 = uVar14;
            uVar9 = uVar12;
            uVar4 = uVar10;
            uVar14 = uVar15;
            uVar12 = uVar13;
            goto LAB_1035b81e4;
          }
          FUN_1035b7db4(&uStack_110,&uStack_150,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_130,&uStack_150,0x112db6f48,&UNK_10d969b40);
        }
        func_0x00010159fa64(uVar12,uVar14,uVar4);
        uVar14 = param_1[0x10];
        uVar12 = param_1[0xf];
        uVar4 = param_1[0x11];
        uVar15 = param_2[0x10];
        uVar13 = param_2[0xf];
        uVar10 = param_2[0x11];
        uStack_170 = uVar13;
        uStack_168 = uVar15;
        uStack_160 = uVar10;
        uStack_150 = uVar12;
        uStack_148 = uVar14;
        uStack_140 = uVar4;
        if (uVar4 >> 0x3c < 0xf) {
          if (0xe < uVar10 >> 0x3c) goto LAB_1035b84dc;
          if (uVar12 != uVar13) {
            FUN_1035b7db4(&uStack_150,&uStack_190,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_170;
            puVar3 = &uStack_190;
            goto LAB_1035b830c;
          }
          FUN_1035b7db4(&uStack_150,&uStack_190,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_170,&uStack_190,0x112db6f48,&UNK_10d969b40);
          uVar13 = uVar14;
          func_0x000100e25fcc(uVar14,uVar4,uVar15,uVar10);
          func_0x00010159fa64(uVar12,uVar15,uVar10);
          if ((uVar13 & 1) == 0) goto LAB_1035b8334;
        }
        else {
          if (uVar10 >> 0x3c < 0xf) {
LAB_1035b84dc:
            FUN_1035b7db4(&uStack_150,&uStack_190,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_170;
            puVar3 = &uStack_190;
            uVar7 = uVar4;
            uVar8 = uVar14;
            uVar9 = uVar12;
            uVar4 = uVar10;
            uVar14 = uVar15;
            uVar12 = uVar13;
            goto LAB_1035b81e4;
          }
          FUN_1035b7db4(&uStack_150,&uStack_190,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_170,&uStack_190,0x112db6f48,&UNK_10d969b40);
        }
        func_0x00010159fa64(uVar12,uVar14,uVar4);
        uVar14 = param_1[0x13];
        uVar12 = param_1[0x12];
        uVar4 = param_1[0x14];
        uVar15 = param_2[0x13];
        uVar13 = param_2[0x12];
        uVar10 = param_2[0x14];
        uStack_1b0 = uVar13;
        uStack_1a8 = uVar15;
        uStack_1a0 = uVar10;
        uStack_190 = uVar12;
        uStack_188 = uVar14;
        uStack_180 = uVar4;
        if (uVar4 >> 0x3c < 0xf) {
          if (0xe < uVar10 >> 0x3c) goto LAB_1035b85b8;
          if (uVar12 != uVar13) {
            FUN_1035b7db4(&uStack_190,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_1b0;
            puVar3 = &uStack_1d0;
            goto LAB_1035b830c;
          }
          FUN_1035b7db4(&uStack_190,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_1b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
          uVar13 = uVar14;
          func_0x000100e25fcc(uVar14,uVar4,uVar15,uVar10);
          func_0x00010159fa64(uVar12,uVar15,uVar10);
          if ((uVar13 & 1) == 0) goto LAB_1035b8334;
        }
        else {
          if (uVar10 >> 0x3c < 0xf) {
LAB_1035b85b8:
            FUN_1035b7db4(&uStack_190,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
            puVar2 = &uStack_1b0;
            puVar3 = &uStack_1d0;
            uVar7 = uVar4;
            uVar8 = uVar14;
            uVar9 = uVar12;
            uVar4 = uVar10;
            uVar14 = uVar15;
            uVar12 = uVar13;
            goto LAB_1035b81e4;
          }
          FUN_1035b7db4(&uStack_190,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
          FUN_1035b7db4(&uStack_1b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
        }
        func_0x00010159fa64(uVar12,uVar14,uVar4);
        lVar5 = param_1[2];
        lVar11 = param_2[2];
        if ((char)param_2[3] == '\x01') {
          if (lVar11 < 2) {
            if (lVar11 == 0) {
              if (lVar5 == 0) {
LAB_1035b8690:
                uVar14 = param_1[0x16];
                uVar12 = param_1[0x15];
                uVar4 = param_1[0x17];
                uVar15 = param_2[0x16];
                uVar13 = param_2[0x15];
                uVar10 = param_2[0x17];
                uStack_1f0 = uVar13;
                uStack_1e8 = uVar15;
                uStack_1e0 = uVar10;
                uStack_1d0 = uVar12;
                uStack_1c8 = uVar14;
                uStack_1c0 = uVar4;
                if (uVar4 >> 0x3c < 0xf) {
                  if (0xe < uVar10 >> 0x3c) goto LAB_1035b8778;
                  if (uVar12 != uVar13) {
                    FUN_1035b7db4(&uStack_1d0,auStack_208,0x112db6f48,&UNK_10d969b40);
                    puVar2 = &uStack_1f0;
                    puVar3 = auStack_208;
                    goto LAB_1035b830c;
                  }
                  FUN_1035b7db4(&uStack_1d0,auStack_208,0x112db6f48,&UNK_10d969b40);
                  FUN_1035b7db4(&uStack_1f0,auStack_208,0x112db6f48,&UNK_10d969b40);
                  uVar13 = uVar14;
                  func_0x000100e25fcc(uVar14,uVar4,uVar15,uVar10);
                  func_0x00010159fa64(uVar12,uVar15,uVar10);
                  if ((uVar13 & 1) == 0) goto LAB_1035b8334;
                }
                else {
                  if (uVar10 >> 0x3c < 0xf) {
LAB_1035b8778:
                    FUN_1035b7db4(&uStack_1d0,auStack_208,0x112db6f48,&UNK_10d969b40);
                    puVar2 = &uStack_1f0;
                    puVar3 = auStack_208;
                    uVar7 = uVar4;
                    uVar8 = uVar14;
                    uVar9 = uVar12;
                    uVar4 = uVar10;
                    uVar14 = uVar15;
                    uVar12 = uVar13;
                    goto LAB_1035b81e4;
                  }
                  FUN_1035b7db4(&uStack_1d0,auStack_208,0x112db6f48,&UNK_10d969b40);
                  FUN_1035b7db4(&uStack_1f0,auStack_208,0x112db6f48,&UNK_10d969b40);
                }
                func_0x00010159fa64(uVar12,uVar14,uVar4);
                lVar5 = param_1[4];
                func_0x000100e25fcc(lVar5,param_1[5],param_2[4],param_2[5]);
                uVar1 = (uint)lVar5;
                goto LAB_1035b8408;
              }
            }
            else if (lVar5 == 1) goto LAB_1035b8690;
          }
          else if (lVar11 == 2) {
            if (lVar5 == 2) goto LAB_1035b8690;
          }
          else if (lVar5 == 3) goto LAB_1035b8690;
        }
        else if (lVar5 == lVar11) goto LAB_1035b8690;
      }
    }
    else {
      if ((uVar12 & 0xff) == 2) goto LAB_1035b8288;
      if ((((uint)uVar12 ^ (uint)uVar4) & 1) == 0) {
        FUN_1035b7db4(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        FUN_1035b7db4(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        uVar15 = uVar14;
        func_0x000100e25fcc(uVar14,lVar5,uVar10,lVar11);
        func_0x000101556278(uVar12,uVar10,lVar11);
        if ((uVar15 & 1) != 0) goto LAB_1035b7fb4;
      }
      else {
        FUN_1035b7db4(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        FUN_1035b7db4(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar12,uVar10,lVar11);
      }
LAB_1035b8400:
      func_0x000101556278(uVar4,uVar14,lVar5);
    }
  }
  uVar1 = 0;
LAB_1035b8408:
  return uVar1 & 1;
}



/* Entry: 1035b8860; end: 1035b889f;  */

void FUN_1035b8860(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1ee8;
  func_0x000107c61520(&UNK_10dbe1ee8,&UNK_110669bb8);
  puRam0000000112f7b918 = puVar1;
  return;
}



/* Entry: 1035b88a0; end: 1035b88b3;  */

void FUN_1035b88a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035b88b4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035b88f4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035b88b4; end: 1035b8933;  */

void FUN_1035b88b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1e10;
  func_0x000107c61520(&UNK_10dbe1e10,&UNK_110669c70);
  puRam0000000112f7b928 = puVar1;
  return;
}



/* Entry: 1035b8934; end: 1035b8937;  */

void FUN_1035b8934(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7b938 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7b940;
  func_0x00010002969c(0x112f7b940,&UNK_10dbe1d98);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7b938 = puVar2;
  return;
}



/* Entry: 1035b8938; end: 1035b8987;  */

void FUN_1035b8938(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7b938 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7b940;
  func_0x00010002969c(0x112f7b940,&UNK_10dbe1d98);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7b938 = puVar2;
  return;
}


